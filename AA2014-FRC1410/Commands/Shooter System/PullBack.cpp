#include "PullBack.h"

PullBack::PullBack() {
	// Use requires() here to declare subsystem dependencies
	Requires(shooter);
}

// Called just before this Command runs the first time
void PullBack::Initialize() {
	shooter->ResetEncoder();
	shooter->PullBackMotorSpeed(WINCH_SPEED);
}

// Called repeatedly when this Command is scheduled to run
void PullBack::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool PullBack::IsFinished() {
	return (shooter->PullBackDistance() > (MAX_PULLBACK_DISTANCE - ENCODER_RANGE));
}

// Called once after isFinished returns true
void PullBack::End() {
	shooter->PullBackMotorSpeed(0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void PullBack::Interrupted() {
	shooter->PullBackMotorSpeed(0.0);
}
