#include "HotFirst.h"
#include "../TestCommands/Shooter/LiftToAngle.h"
#include "../TestCommands/Shooter/TestFire.h"
#include "../TestCommands/Shooter/TestWinch.h"
#include "../TestCommands/Shooter/ShooterLiftForTime.h"
#include "../TestCommands/Intake/TestLiftIntake.h"
#include "../Drive/DriveForwardOverTime.h"
#include "WaitForTime.h"
#include "../../Robotmap.h"

HotFirst::HotFirst() {
        // Add Commands here:
        // e.g. AddSequential(new Command1());
        //      AddSequential(new Command2());
        // these will run in order.

        // To run multiple commands at the same time,
        // use AddParallel()
	
        // e.g. AddParallel(new Command1());
        //      AddSequential(new Command2());
        // Command1 and Command2 will run in parallel.

        // A command group will require all of the subsystems that each member
        // would require.
        // e.g. if Command1 requires chassis, and Command2 requires arm,
        // a CommandGroup containing them would require both the chassis and the
        // arm.
	/**
	AddSequential(new ShooterLiftForTime(0.4));
	AddParallel(new LiftToAngle(AUTO_FIRST_ANGLE), 5.0);
	AddParallel(new TestWinch());
	AddParallel(new TestLiftIntake(false));
	AddSequential(new TestFire());
	AddSequential(new DriveForwardOverTime(0.7));
	
	AddParallel(new ShooterLiftForTime(0.85));
	AddParallel(new TestLiftIntake(false));
	AddSequential(new TestWinch());
	//AddSequential(new TestLiftIntake(false));
	AddSequential(new LiftToAngle(AUTO_FIRST_ANGLE), 5.0);
	AddSequential(new TestFire());
	AddSequential(new DriveForwardOverTime(0.7));
	**/
	AddParallel(new TestWinch());
	AddSequential(new LiftToAngle(AUTO_FIRST_ANGLE), 5.0);
	AddSequential(new TestLiftIntake(false));
	AddSequential(new LiftToAngle(AUTO_FIRE_ANGLE), 5.0);
	AddSequential(new TestFire());
	AddSequential(new DriveForwardOverTime(0.7));
}
