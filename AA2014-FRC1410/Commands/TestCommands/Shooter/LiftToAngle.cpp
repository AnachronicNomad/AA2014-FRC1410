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
	if( shooter->EncDistance() > m_angle)
	{
		shooter->SetSpeedAngle(SHOOTER_LIFT_SPEED);
	}
	else if(shooter->EncDistance() < m_angle)
	{
		shooter->SetSpeedAngle((SHOOTER_LIFT_SPEED) * -1);
	}
	SmartDashboard::PutNumber("Shooter Angle", shooter->EncDistance());
}

// Make this return true when this Command no longer needs to run execute()
bool LiftToAngle::IsFinished() {
	return (
			(shooter->EncDistance() > m_angle -2)
			&&
			(shooter->EncDistance() < m_angle +2)
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
