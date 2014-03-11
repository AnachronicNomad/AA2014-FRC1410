#include "ToggleRollers.h"

ToggleRollers::ToggleRollers() {
	// Use requires() here to declare subsystem dependencies
	//Requires(intake);
	toggle = false;
}

// Called just before this Command runs the first time
void ToggleRollers::Initialize() {
	if(toggle)
	{
		intake->SetDirectionRoller(toggle);
	}
	else
	{
		intake->SetDirectionRoller(toggle);
	}
	toggle = !toggle;
}

// Called repeatedly when this Command is scheduled to run
void ToggleRollers::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool ToggleRollers::IsFinished() {
	return true;
}

// Called once after isFinished returns true
void ToggleRollers::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ToggleRollers::Interrupted() {
}
