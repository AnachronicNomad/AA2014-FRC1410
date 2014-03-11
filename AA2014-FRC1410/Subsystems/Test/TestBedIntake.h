#ifndef TESTBEDINTAKE_H
#define TESTBEDINTAKE_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author fifthparallel
 */
class TestBedIntake: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Talon *intakeMotor;
	DigitalInput *upperSwitch;
	DigitalInput *lowerSwitch;
	Relay *roller;
public:
	TestBedIntake();
	void InitDefaultCommand();
	void SetSpeed(float speed);
	bool UpperSwitch();
	bool LowerSwitch();
	void SetDirectionRoller(bool on);
	
};

#endif
