#include "ToggleRollersOn.h"

ToggleRollersOn::ToggleRollersOn() {
	// Use requires() here to declare subsystem dependencies
	Requires(intake);
	toggle = false;
}

// Called just before this Command runs the first time
void ToggleRollersOn::Initialize() {
	toggle = !toggle;
	intake->SetDirectionRoller(toggle);
}

// Called repeatedly when this Command is scheduled to run
void ToggleRollersOn::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool ToggleRollersOn::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void ToggleRollersOn::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ToggleRollersOn::Interrupted() {
}
