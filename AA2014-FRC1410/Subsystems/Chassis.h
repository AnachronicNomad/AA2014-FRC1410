#ifndef CHASSIS_H
#define CHASSIS_H
#include "Commands/Subsystem.h"
#include "WPILib.h"

/**
 *
 *
 * @author fifthparallel
 */
class Chassis: public Subsystem {
private:
	RobotDrive* drive;
	Encoder* encoder1;
	Encoder* encoder2;
	//Gyro* gyro;
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	Chassis();
	void InitDefaultCommand();
	void MecanumDrive(double deltaX, double deltaY, double rot);
	double EncoderDistance(double e1, double e2, double distance);
	void StartEncoders();
	void ResetEncoders();	
};

#endif
