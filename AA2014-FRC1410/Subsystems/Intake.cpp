#include "Intake.h"
#include "../Robotmap.h"

Intake::Intake() : Subsystem("Intake") {
	rollerMotor = new Relay(1);
	leverArm = new Talon(1);
	pot = new AnalogChannel(1,1);
}
    
void Intake::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}
void Intake::SetDirectionRoller(int direction){
	if (direction == 0){
		rollerMotor->Set(Relay::kOff);
		
	}
	else if (direction == 1){
		rollerMotor->Set(Relay::kForward);	
	}
	
}

double Intake::PotAngle(){
	return (pot->GetVoltage());
}

void Intake::SetSpeed(float speed){
	leverArm->SetSpeed(speed);
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
