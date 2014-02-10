#include "ArmUp.h"
#include "../../RobotMap.h"
ArmUp::ArmUp() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	Requires(intake);
	SetInterruptible(false);
}

// Called just before this Command runs the first time
void ArmUp::Initialize() {
	potangle = intake->PotAngle();
		if(potangle < MAX_INTAKE_ANGLE){
			intake->SetSpeed(0.5);
		}
}

// Called repeatedly when this Command is scheduled to run
void ArmUp::Execute() {
	potangle = intake->PotAngle();
}

// Make this return true when this Command no longer needs to run execute()
bool ArmUp::IsFinished() {
	return (potangle > (MAX_INTAKE_ANGLE - 0.006) && potangle < (MAX_INTAKE_ANGLE + 0.006));
}

// Called once after isFinished returns true
void ArmUp::End() {
	intake->SetSpeed(0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ArmUp::Interrupted() {
	intake->SetSpeed(0.0);
}
