#include "Fire.h"

Fire::Fire() {
	// Use requires() here to declare subsystem dependencies
	Requires(shooter);
	m_timer = new Timer();
}

// Called just before this Command runs the first time
void Fire::Initialize() {
	m_timer->Start();
	m_timer->Reset();
	shooter->SetDirectionTrigger(true);
}

// Called repeatedly when this Command is scheduled to run
void Fire::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool Fire::IsFinished() {
	return (m_timer->Get() > 300);
}

// Called once after isFinished returns true
void Fire::End() {
	shooter->SetDirectionTrigger(false);
	m_timer->Stop();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void Fire::Interrupted() {
	shooter->SetDirectionTrigger(false);
	m_timer->Stop();
}
