#include "TestFire.h"

TestFire::TestFire() {
	// Use requires() here to declare subsystem dependencies
	//Requires(shooter);
	timer = new Timer();
	timer->Start();
}

// Called just before this Command runs the first time
void TestFire::Initialize() {
	timer->Reset();
	shooter->SetTriggerState(true);
}

// Called repeatedly when this Command is scheduled to run
void TestFire::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool TestFire::IsFinished() {
	return (timer->Get() > 0.6);
}

// Called once after isFinished returns true
void TestFire::End() {
	shooter->SetTriggerState(false);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TestFire::Interrupted() {
	shooter->SetTriggerState(false);
}
