#include "TestBedIntake.h"
#include "../../Robotmap.h"

TestBedIntake::TestBedIntake() : Subsystem("TestBedIntake") {
	intakeMotor = new Talon(5);
	upperSwitch = new DigitalInput(12);
	lowerSwitch = new DigitalInput(13);
	roller = new Relay(1);
}
    
void TestBedIntake::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}


// Put methods for controlling this subsystem
// here. Call these from Commands.
void TestBedIntake::SetSpeed(float speed)
{
	intakeMotor->Set(speed);
}

bool TestBedIntake::UpperSwitch()
{
	return upperSwitch->Get();
}

bool TestBedIntake::LowerSwitch()
{
	return lowerSwitch->Get();
}

void TestBedIntake::SetDirectionRoller(bool on)
{
	if(on)
	{
		roller->Set(Relay::kForward);
		SmartDashboard::PutBoolean("roller intake", on);
	}
	else
	{
		roller->Set(Relay::kOff);
		SmartDashboard::PutBoolean("roller intake", on);
	}
}
