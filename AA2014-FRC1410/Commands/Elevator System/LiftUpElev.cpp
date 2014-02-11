#include "LiftUpElev.h"

LiftUpElev::LiftUpElev() {
	// Use requires() here to declare subsystem dependencies
	Requires(elev);
}

// Called just before this Command runs the first time
void LiftUpElev::Initialize() {
	if(elev->HitEnd(true) == false)
	{
		elev->SetSpeed(0.5);
	}
}

// Called repeatedly when this Command is scheduled to run
void LiftUpElev::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool LiftUpElev::IsFinished() {
	return elev->HitEnd(true);
}

// Called once after isFinished returns true
void LiftUpElev::End() {
	elev->SetSpeed(0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void LiftUpElev::Interrupted() {
	elev->SetSpeed(0.0);
}
