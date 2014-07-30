#include "TestBedElevator.h"
#include "../../Robotmap.h"

TestBedElevator::TestBedElevator() : Subsystem("TestBedElevator") {
	elevHeight = new Jaguar(8);
	upperLimitSwitch = new DigitalInput(10);
	lowerLimitSwitch = new DigitalInput(9);
}
    
void TestBedElevator::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	
}


// Put methods for controlling this subsystem
// here. Call these from Commands.

void TestBedElevator::SetSpeed(float speed)
{
	elevHeight->Set(speed);
}

bool TestBedElevator::UpperSwitch()
{
	return upperLimitSwitch->Get();
}

bool TestBedElevator::LowerSwitch()
{
	return lowerLimitSwitch->Get();
}
