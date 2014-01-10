#include "Chassis.h"
#include "../Robotmap.h"

Chassis::Chassis() : Subsystem("Chassis") {
	drive = new RobotDrive(1, 2, 3, 4);
}
    
void Chassis::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}


// Put methods for controlling this subsystem
// here. Call these from Commands.
void Chassis::MecanumDrive(Joystick* stick)
{
	drive->MecanumDrive_Cartesian(stick->GetRawAxis(1), stick->GetRawAxis(2), stick->GetRawAxis(3));
}
