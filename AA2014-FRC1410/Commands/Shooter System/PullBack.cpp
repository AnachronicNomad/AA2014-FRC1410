#include "PullBack.h"

PullBack::PullBack() {
	// Use requires() here to declare subsystem dependencies
	Requires(shooter);
}

// Called just before this Command runs the first time
void PullBack::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void PullBack::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool PullBack::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void PullBack::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void PullBack::Interrupted() {
}
