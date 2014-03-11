#include "DriveForwardOverTime.h"

DriveForwardOverTime::DriveForwardOverTime(float time) {
	// Use requires() here to declare subsystem dependencies
	Requires(chassis);
	m_time = time;
	timer = new Timer();
	timer->Start();
}

// Called just before this Command runs the first time
void DriveForwardOverTime::Initialize() {
	timer->Reset();
}

// Called repeatedly when this Command is scheduled to run
void DriveForwardOverTime::Execute() {
	chassis->MecanumDrive(0.0,0.7,0.0);
	SmartDashboard::PutNumber("Time auto drive forward", m_time);
}

// Make this return true when this Command no longer needs to run execute()
bool DriveForwardOverTime::IsFinished() {
	return timer->Get() >= m_time;
}

// Called once after isFinished returns true
void DriveForwardOverTime::End() {
	chassis->MecanumDrive(0.0,0.0,0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DriveForwardOverTime::Interrupted() {
	chassis->MecanumDrive(0.0,0.0,0.0);
}
