#include "ShooterLiftForTime.h"
#include "../../../Robotmap.h"

ShooterLiftForTime::ShooterLiftForTime(double time) {
	// Use requires() here to declare subsystem dependencies
	Requires(shooter);
	timer = new Timer();
	m_time = time;
	
	timer->Start();
}

// Called just before this Command runs the first time
void ShooterLiftForTime::Initialize() {
	timer->Reset();
	shooter->SetSpeedAngle((SHOOTER_LIFT_SPEED) * -1);
}

// Called repeatedly when this Command is scheduled to run
void ShooterLiftForTime::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool ShooterLiftForTime::IsFinished() {
	return timer->Get() > m_time;
}

// Called once after isFinished returns true
void ShooterLiftForTime::End() {
	shooter->SetSpeedAngle(0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ShooterLiftForTime::Interrupted() {
	shooter->SetSpeedAngle(0.0);
}
