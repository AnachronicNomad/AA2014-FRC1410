#include "ArmOperatorControl.h"
#include "../../Robotmap.h"

ArmOperatorControl::ArmOperatorControl() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(intake);
}

// Called just before this Command runs the first time
void ArmOperatorControl::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void ArmOperatorControl::Execute() {
	potangle = intake->PotAngle();
	if(potangle > MIN_INTAKE_ANGLE && potangle < MAX_INTAKE_ANGLE){
		intake->SetSpeed(oi->GetDriverStickAxis(false,2));
	}
	else{
		intake->SetSpeed(0);
	}
}

// Make this return true when this Command no longer needs to run execute()
bool ArmOperatorControl::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void ArmOperatorControl::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ArmOperatorControl::Interrupted() {
	intake->SetSpeed(0.0);
}
