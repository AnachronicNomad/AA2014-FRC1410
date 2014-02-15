#include "LiftDownElev.h"
#include "../../Robotmap.h"

LiftDownElev::LiftDownElev() {
	// Use requires() here to declare subsystem dependencies
	Requires(elev);
	
}

// Called just before this Command runs the first time
void LiftDownElev::Initialize() {
	if(elev->HitEnd(false) == false)
		{
			elev->SetSpeed(-(ELEV_SPEED));
		}
}

// Called repeatedly when this Command is scheduled to run
void LiftDownElev::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool LiftDownElev::IsFinished() {
	return elev->HitEnd(false);
}

// Called once after isFinished returns true
void LiftDownElev::End() {
	elev->SetSpeed(0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void LiftDownElev::Interrupted() {
	elev->SetSpeed(0.0);
}
