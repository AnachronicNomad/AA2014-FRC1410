#include "TeleOpMecanum.h"

TeleOpMecanum::TeleOpMecanum() {
	// Use requires() here to declare subsystem dependencies
	Requires(chassis);
}

// Called just before this Command runs the first time
void TeleOpMecanum::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void TeleOpMecanum::Execute() {
	chassis->MecanumDrive((oi->GetDriverStickAxis(true,1)), (oi->GetDriverStickAxis(true,2)), (oi->GetDriverStickAxis(true,4) * -1));
}
// Make this return true when this Command no longer needs to run execute()
bool TeleOpMecanum::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void TeleOpMecanum::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TeleOpMecanum::Interrupted() {
}
