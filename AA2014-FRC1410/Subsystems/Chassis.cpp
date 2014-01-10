#include "Chassis.h"
#include "../Robotmap.h"
#include "../Commands/TeleOpMecanum.h"

Chassis::Chassis() : Subsystem("Chassis") {
	drive = new RobotDrive(1, 2, 3, 4);
}
    
void Chassis::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	SetDefaultCommand(new TeleOpMecanum());
}


// Put methods for controlling this subsystem
// here. Call these from Commands.
void Chassis::MecanumDrive(double deltaX, double deltaY, double rot)
{
	drive->MecanumDrive_Cartesian( deltaX, deltaY,rot,0.0);
}
