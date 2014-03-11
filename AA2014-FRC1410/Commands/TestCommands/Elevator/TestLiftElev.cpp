#include "TestLiftElev.h"
#include "../../../Robotmap.h"

TestLiftElev::TestLiftElev() {
	// Use requires() here to declare subsystem dependencies
	Requires(elev);
	m_up = false;
}

// Called just before this Command runs the first time
void TestLiftElev::Initialize() {
	m_up = !m_up;
	if(m_up)
	{
		if(elev->UpperSwitch() == false)
		{
			elev->SetSpeed((ELEV_SPEED));
		}
	}
	else
	{
		if(elev->LowerSwitch() == false)
		{
			elev->SetSpeed((ELEV_SPEED) * -1);
		}
	}
}

// Called repeatedly when this Command is scheduled to run
void TestLiftElev::Execute() {
	
}

// Make this return true when this Command no longer needs to run execute()
bool TestLiftElev::IsFinished() {
	if(m_up)
	{
		return elev->UpperSwitch();
	}
	else
	{
		return elev->LowerSwitch();
	}
}

// Called once after isFinished returns true
void TestLiftElev::End() {
	elev->SetSpeed(0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void TestLiftElev::Interrupted() {
	elev->SetSpeed(0.0);
}
