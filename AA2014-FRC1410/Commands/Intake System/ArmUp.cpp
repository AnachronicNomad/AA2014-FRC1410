#include "ArmUp.h"
#include "../../RobotMap.h"
ArmUp::ArmUp() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(intake);
	potangle = intake->PotAngle();
}

// Called just before this Command runs the first time
void ArmUp::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void ArmUp::Execute() {
	if(potangle < MAXINTAKEANGLE){
		intake->SetSpeed(0.5);
	}
	else{
		intake->SetSpeed(0);
	}
}

// Make this return true when this Command no longer needs to run execute()
bool ArmUp::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ArmUp::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ArmUp::Interrupted() {
}
