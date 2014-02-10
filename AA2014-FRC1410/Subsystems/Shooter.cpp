#include "Shooter.h"
#include "../Robotmap.h"

Shooter::Shooter() : Subsystem("Shooter") {
	winchMotor = new Talon(SHOOTER_WINCH_MOTOR_PORT);
	angleMotor = new Talon(SHOOTER_ANGLE_MOTOR_PORT);
	comp = new Compressor(
						  SHOOTER_COMPRESSOR_PRESSURE_SWITCH_DIO_PORT,
						  SHOOTER_COMPRESSOR_RELAY_PORT_RELAY
						  );
	
	trigger = new DoubleSolenoid(
								 SHOOTER_TRIGGER_EXTEND_PORT,
								 SHOOTER_TRIGGER_RETRACT_PORT
								);
	winchPullBack = new Encoder(
								SHOOTER_WINCH_ENCODER_CHAN_A_PORT,
								SHOOTER_WINCH_ENCODER_CHAN_B_PORT
								);
	shooterPot = new AnalogChannel(
									SHOOTER_ANGLE_POTENTIOMETER_PORT
								  );
	
	trigger->Set(DoubleSolenoid::kReverse);
	comp->Start();
	winchPullBack->Start();
	winchPullBack->Reset();
}
    
void Shooter::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}


// Put methods for controlling this subsystem
// here. Call these from Commands.
void Shooter::SetDirectionTrigger(bool forward)
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
