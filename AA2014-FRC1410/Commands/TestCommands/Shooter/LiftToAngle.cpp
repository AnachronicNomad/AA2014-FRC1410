#include "LiftToAngle.h"
#include "../../../Robotmap.h"

LiftToAngle::LiftToAngle(int angle) {
	// Use requires() here to declare subsystem dependencies
	Requires(shooter);
	m_angle = angle;
}

// Called just before this Command runs the first time
void LiftToAngle::Initialize() {
}

// Called repeatedly when this Command is scheduled to run
void LiftToAngle::Execute() {
	if( (int)((shooter->AnglePotVoltage() * 10)) < m_angle)
	{
		shooter->SetSpeedAngle(SHOOTER_LIFT_SPEED);
	}
	else if((int)((shooter->AnglePotVoltage() * 10)) > m_angle)
	{
		shooter->SetSpeedAngle((SHOOTER_LIFT_SPEED) * -1);
	}
	SmartDashboard::PutNumber("Shooter Angle", shooter->AnglePotVoltage());
}

// Make this return true when this Command no longer needs to run execute()
bool LiftToAngle::IsFinished() {
	return (
			(((int)((shooter->AnglePotVoltage() * 10))) > m_angle -1)
			&&
			(((int)((shooter->AnglePotVoltage() * 10))) < m_angle +1)
			);
	//return false;
}

// Called once after isFinished returns true
void LiftToAngle::End() {
	shooter->SetSpeedAngle(0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void LiftToAngle::Interrupted() {
	shooter->SetSpeedAngle(0.0);
}
