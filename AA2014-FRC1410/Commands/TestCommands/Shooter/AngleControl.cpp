#include "AngleControl.h"

AngleControl::AngleControl() {
	// Use requires() here to declare subsystem dependencies
	Requires(shooter);
	SetInterruptible(true);
}

// Called just before this Command runs the first time
void AngleControl::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void AngleControl::Execute() {
	shooter->SetSpeedAngle(oi->GetDriverStickAxis(false,2) * -1);
	SmartDashboard::PutNumber("Shooter Angle", shooter->EncDistance());
}

// Make this return true when this Command no longer needs to run execute()
bool AngleControl::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void AngleControl::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void AngleControl::Interrupted() {
}
