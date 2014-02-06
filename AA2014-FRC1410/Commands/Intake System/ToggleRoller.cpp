#include "ToggleRoller.h"

ToggleRoller::ToggleRoller() {
	// Use requires() here to declare subsystem dependencies
	Requires(intake);
}

// Called just before this Command runs the first time
void ToggleRoller::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void ToggleRoller::Execute() {
	intake->SetDirectionRoller(1);
}

// Make this return true when this Command no longer needs to run execute()
bool ToggleRoller::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ToggleRoller::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ToggleRoller::Interrupted() {
}
