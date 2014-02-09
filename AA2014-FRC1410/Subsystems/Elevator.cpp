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
}
    
void Elevator::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}


// Put methods for controlling this subsystem
// here. Call these from Commands.
