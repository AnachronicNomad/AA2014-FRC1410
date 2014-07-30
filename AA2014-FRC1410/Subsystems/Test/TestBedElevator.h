#ifndef TESTBEDELEVATOR_H
#define TESTBEDELEVATOR_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author fifthparallel
 */
class TestBedElevator: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Jaguar *elevHeight;
	DigitalInput *upperLimitSwitch;
	DigitalInput *lowerLimitSwitch;
public:
	TestBedElevator();
	void InitDefaultCommand();
	void SetSpeed(float speed);
	bool UpperSwitch();
	bool LowerSwitch();
};

#endif
