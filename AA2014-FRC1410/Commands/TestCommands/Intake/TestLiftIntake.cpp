#include "TestLiftIntake.h"
#include "../../../Robotmap.h"

TestLiftIntake::TestLiftIntake(bool up) {
	// Use requires() here to declare subsystem dependencies
	//Requires(intake);
	m_up = up;
}

// Called just before this Command runs the first time
void TestLiftIntake::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void TestLiftIntake::Execute() {
	if(m_up)
	{
		if(intake->UpperSwitch() == false)
		{
			intake->SetSpeed(INTAKE_LIFT_SPEED);
		}
	}
	else
	{
		if(intake->LowerSwitch() == false)
		{
			intake->SetSpeed(-(INTAKE_LIFT_SPEED));
		}
	}
}

// Make this return true when this Command no longer needs to run execute()
bool TestLiftIntake::IsFinished() {
	if(m_up)
	{
		return intake->UpperSwitch();
	}
	else
	{
		return intake->LowerSwitch();
	}
}

// Called once after isFinished returns true
void TestLiftIntake::End() {
	intake->SetSpeed(0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TestLiftIntake::Interrupted() {
	intake->SetSpeed(0.0);
}
