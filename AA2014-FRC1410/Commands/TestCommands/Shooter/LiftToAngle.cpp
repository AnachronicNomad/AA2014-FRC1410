#include "LiftToAngle.h"
#include "../../../Robotmap.h"

LiftToAngle::LiftToAngle(float angle) {
	// Use requires() here to declare subsystem dependencies
	Requires(shooter);
	m_angle = angle;
}

// Called just before this Command runs the first time
void LiftToAngle::Initialize() {
}

// Called repeatedly when this Command is scheduled to run
void LiftToAngle::Execute() {
	if(shooter->AnglePotVoltage() < m_angle)
	{
		shooter->SetSpeedAngle(-0.9);
	}
	else if(shooter->AnglePotVoltage() > m_angle)
	{
		shooter->SetSpeedAngle(0.9);
	}
	SmartDashboard::PutNumber("Shooter Angle", shooter->AnglePotVoltage());
}

// Make this return true when this Command no longer needs to run execute()
bool LiftToAngle::IsFinished() {
	return ((shooter->AnglePotVoltage() > m_angle - POT_RANGE) && (shooter->AnglePotVoltage() < m_angle + POT_RANGE));
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