#include "TestWinch.h"

TestWinch::TestWinch() {
	// Use requires() here to declare subsystem dependencies
	//Requires(shooter);
}

// Called just before this Command runs the first time
void TestWinch::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void TestWinch::Execute() {
	shooter->SetSpeedWinch(1.0);
}

// Make this return true when this Command no longer needs to run execute()
bool TestWinch::IsFinished() {
	return shooter->ShooterPulledBack();
}

// Called once after isFinished returns true
void TestWinch::End() {
	shooter->SetSpeedWinch(0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TestWinch::Interrupted() {
	shooter->SetSpeedWinch(0.0);
}
