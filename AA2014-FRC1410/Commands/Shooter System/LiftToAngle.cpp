#include "LiftToAngle.h"

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
	
}

// Make this return true when this Command no longer needs to run execute()
bool LiftToAngle::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void LiftToAngle::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void LiftToAngle::Interrupted() {
}
