#ifndef ELEVATOR_H
#define ELEVATOR_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author Isaac
 */
class Elevator: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Talon* elevMotor;
	
	DigitalInput* lowerSwitch;
	DigitalInput* upperSwitch;
	Encoder* heightEncoder;
	
public:
	Elevator();
	void InitDefaultCommand();
	bool HitEnd(bool up);
	void ResetEncoder();
	double EncoderHeightRate();
	void SetSpeed(float speed);
};

#endif
