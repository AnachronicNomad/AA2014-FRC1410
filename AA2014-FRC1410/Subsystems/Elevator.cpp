#include "Elevator.h"
#include "../Robotmap.h"

Elevator::Elevator() : Subsystem("Elevator") {
	elevMotor = new Talon(
						  ELEVATOR_HEIGHT_PORT
						 );
	lowerSwitch = new DigitalInput(
							 ELEVATOR_LIMIT_SWITCH_LOWER_PORT
							);
	upperSwitch = new DigitalInput(
								   ELEVATOR_LIMIT_SWITCH_UPPER_PORT
								  );
	heightEncoder = new Encoder(
								ELEVATOR_ENCODER_CHAN_A_PORT,
								ELEVATOR_ENCODER_CHAN_B_PORT
								);
	heightEncoder->Start();
}
    
void Elevator::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}


// Put methods for controlling this subsystem
// here. Call these from Commands.
bool Elevator::HitEnd(bool up)
{
	if(up)
	{
		return upperSwitch->Get();
	}
	else
	{
		return lowerSwitch->Get();
	}
}

void Elevator::ResetEncoder()
{
	heightEncoder->Reset();
}

double Elevator::EncoderHeightRate()
{
	return heightEncoder->GetRate();
}

void Elevator::SetSpeed(float speed)
{
	elevMotor->Set(speed);
}
