#include "Intake.h"
#include "../Robotmap.h"

Intake::Intake() : Subsystem("Intake") {
	rollerMotor = new Relay(INTAKE_ROLLER_PORT_RELAY);
	leverArm = new Talon(INTAKE_LIFT_ARM_PORT);
	intakePot = new AnalogChannel(
							INTAKE_ARM_POTENTIOMETER_PORT
							);
							
}
    
void Intake::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}
void Intake::SetDirectionRoller(int direction){
	if (direction == 0){
		rollerMotor->Set(Relay::kOff);
		//0 = false
	}
	else if (direction == 1){
		rollerMotor->Set(Relay::kForward);	
		//1 = true
	}
	
}

double Intake::PotAngle(){
	return (intakePot->GetVoltage());
}

void Intake::SetSpeed(float speed){
	leverArm->SetSpeed(speed);
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
