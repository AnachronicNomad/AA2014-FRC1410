#ifndef INTAKE_H
#define INTAKE_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author fifthparallel
 */
class Intake: public Subsystem {
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	Relay * rollerMotor; //Relay 1
	Talon * leverArm;
	AnalogChannel *intakePot;
	
	
public:
	Intake();
	void InitDefaultCommand();
	void SetDirectionRoller(int direction);
	double PotAngle();
	void SetSpeed(float speed);
	
};

#endif
