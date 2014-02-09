#include "Chassis.h"
#include "../Robotmap.h"
#include "../Commands/Drive/TeleOpMecanum.h"
#include <math.h>

Chassis::Chassis() : Subsystem("Chassis") {
	drive = new RobotDrive(
							CHASSIS_FL_PORT,
							CHASSIS_RL_PORT,
							CHASSIS_FR_PORT,
							CHASSIS_RR_PORT
							);
	//encoder1 = new Encoder(1, 2);
	//encoder2 = new Encoder(3, 4, true);
	encoder1 = new Encoder(
							CHASSIS_ENCODER_LEFT_CHAN_A_PORT,
							CHASSIS_ENCODER_LEFT_CHAN_B_PORT
							);
	encoder2 = new Encoder(
							CHASSIS_ENCODER_RIGHT_CHAN_A_PORT,
							CHASSIS_ENCODER_RIGHT_CHAN_B_PORT,
							true //Reverse direction because of Right side
							);
	encoder1->Start();
	encoder2->Start();
	encoder1->Reset();
	encoder2->Reset();
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
double Chassis::EncoderDistance(double e1, double e2, double distance)
{
	e1=encoder1->GetDistance()/ 256.0 * 3 * 3.14159265;
	e2=encoder2->GetDistance()/ 256.0 * 3 * 3.14159265;
	distance = (e1 + e2) / 2;
	return(distance);
}
void Chassis::ResetEncoders()
{
	encoder1->Reset();
	encoder2->Reset();
}
