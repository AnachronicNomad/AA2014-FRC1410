#include "TestBedShooter.h"
#include "../../Robotmap.h"
#include "../../Commands/TestCommands/Shooter/AngleControl.h"

TestBedShooter::TestBedShooter() : Subsystem("TestBedShooter") {
	//winchMotor = new Talon(6);
	winchMotor = new Jaguar(6);
	angleMotor = new Talon(7);
	pullback = new DigitalInput(14);
	comp = new Compressor(11,2);
	trigger = new DoubleSolenoid(1,2);
	angleEnc = new Encoder(1,2);
	
	comp->Start();
	trigger->Set(DoubleSolenoid::kReverse);
	winchMotor->SetSafetyEnabled(false);
	angleEnc->Start();
	angleEnc->Reset();
}
    
void TestBedShooter::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	SetDefaultCommand(new AngleControl());
}


// Put methods for controlling this subsystem
// here. Call these from Commands.
void TestBedShooter::SetTriggerState(bool forward)
{
	if(forward)
	{
		trigger->Set(DoubleSolenoid::kForward);
	}
	else
	{
		trigger->Set(DoubleSolenoid::kReverse);
	}
}

void TestBedShooter::SetSpeedWinch(float speed)
{
	winchMotor->Set(speed);
}

void TestBedShooter::SetSpeedAngle(float speed)
{
	angleMotor->Set(speed);
}

bool TestBedShooter::ShooterPulledBack()
{
	return pullback->Get();
}
/**
double TestBedShooter::AnglePotVoltage()
{
	return anglePot->GetVoltage();
}
**/
double TestBedShooter::EncDistance()
{
	return angleEnc->GetDistance();
}
