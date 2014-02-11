#include "LiftDownElev.h"

LiftDownElev::LiftDownElev() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
}

// Called just before this Command runs the first time
void LiftDownElev::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void LiftDownElev::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool LiftDownElev::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void LiftDownElev::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void LiftDownElev::Interrupted() {
}
