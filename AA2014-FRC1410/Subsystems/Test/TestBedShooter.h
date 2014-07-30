#ifndef TESTBEDSHOOTER_H
#define TESTBEDSHOOTER_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author fifthparallel
 */
class TestBedShooter: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	//Talon *winchMotor;
	Jaguar *winchMotor;
	Talon *angleMotor;
	DigitalInput *pullback;
	Compressor *comp;
	DoubleSolenoid *trigger;
	//AnalogChannel *anglePot;
	Encoder *angleEnc;
public:
	TestBedShooter();
	void InitDefaultCommand();
	void SetTriggerState(bool forward);
	void SetSpeedWinch(float speed);
	void SetSpeedAngle(float speed);
	bool ShooterPulledBack();
	//double AnglePotVoltage();
	double EncDistance();
};

#endif
