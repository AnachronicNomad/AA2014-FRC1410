#ifndef SHOOTER_H
#define SHOOTER_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author Isaac
 */
class Shooter: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Talon* angleMotor;
	Talon* winchMotor;
	
	Encoder* winchPullBack;
	AnalogChannel* shooterPot;
	
	Compressor* comp;
	DoubleSolenoid* trigger;
	
	
	
public:
	Shooter();
	void InitDefaultCommand();
	void SetDirectionTrigger(bool forward);
	float ShooterAngle();
};

#endif
