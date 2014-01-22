#include "Chassis.h"
#include "../Robotmap.h"
#include "../Commands/TeleOpMecanum.h"

Chassis::Chassis() : Subsystem("Chassis") {
	drive = new RobotDrive(1, 2, 3, 4);
	//gyro = new Gyro(1, 1);
	drive->SetInvertedMotor(drive->kFrontRightMotor, true);
	drive->SetInvertedMotor(drive->kRearRightMotor, true);
	//drive->SetInvertedMotor(drive->kFrontLeftMotor, true);
	//drive->SetInvertedMotor(drive->kRearLeftMotor, true);
	drive->SetSafetyEnabled(true);
	drive->SetSensitivity(0.2);
}
    
void Chassis::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	SetDefaultCommand(new TeleOpMecanum());
}


// Put methods for controlling this subsystem
// here. Call these from Commands.
void Chassis::MecanumDrive(double deltaX, double deltaY, double rot)
{
	drive->MecanumDrive_Cartesian( deltaX, deltaY,rot);
}
