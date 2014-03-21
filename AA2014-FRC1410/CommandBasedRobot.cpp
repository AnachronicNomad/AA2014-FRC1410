#include "WPILib.h"
#include "Commands/Command.h"
#include "CommandBase.h"
#include "Commands/Autonomous/HotFirst.h"
#include "Commands/TestCommands/Shooter/TestFire.h"

class CommandBasedRobot : public IterativeRobot {
private:

	LiveWindow *lw;
	Command *hotAutoCom;
	Command *fireDisengage;

	
	virtual void RobotInit() {
		CommandBase::init();
		hotAutoCom = new HotFirst();
		fireDisengage = new TestFire();
		lw = LiveWindow::GetInstance();
	}
	
	virtual void AutonomousInit() {
		hotAutoCom->Start();
	}
	
	virtual void AutonomousPeriodic() {
		Scheduler::GetInstance()->Run();
	}
	
	virtual void TeleopInit() {
		// This makes sure that the autonomous stops running when
		// teleop starts running. If you want the autonomous to 
		// continue until interrupted by another command, remove
		// this line or comment it out.
		//autonomousCommand->Cancel();
		hotAutoCom->Cancel();
	}
	
	virtual void TeleopPeriodic() {
		Scheduler::GetInstance()->Run();
	}
	
	virtual void TestPeriodic() {
		lw->Run();
	}
	
	virtual void DisabledInit() {
		fireDisengage->Start();
	}
};

START_ROBOT_CLASS(CommandBasedRobot);

