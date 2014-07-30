#include "WaitForTime.h"

WaitForTime::WaitForTime(float time) {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	timer = new Timer();
	timer->Start();
}

// Called just before this Command runs the first time
void WaitForTime::Initialize() {
	timer->Reset();
}

// Called repeatedly when this Command is scheduled to run
void WaitForTime::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool WaitForTime::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void WaitForTime::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void WaitForTime::Interrupted() {
}
