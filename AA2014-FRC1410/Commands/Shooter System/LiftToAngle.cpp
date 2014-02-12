#include "LiftToAngle.h"

LiftToAngle::LiftToAngle(float angle) {
	// Use requires() here to declare subsystem dependencies
	Requires(shooter);
	m_targetAngle = angle;
}

// Called just before this Command runs the first time
void LiftToAngle::Initialize() {
	
}

// Called repeatedly when this Command is scheduled to run
void LiftToAngle::Execute() {
	if(shooter->ShooterAngle() > (MIN_SHOOTER_ANGLE - POT_RANGE))
		{
			if(shooter->ShooterAngle() < (MAX_SHOOTER_ANGLE + POT_RANGE))
			{
				if(m_targetAngle < MAX_SHOOTER_ANGLE + POT_RANGE)
				{
					shooter->AngleControlMotorSpeed(-SHOOTER_LIFT_SPEED);
				}
				else if(m_targetAngle > MIN_SHOOTER_ANGLE - POT_RANGE)
				{
					shooter->AngleControlMotorSpeed(SHOOTER_LIFT_SPEED);
				}
			}
		}
}

// Make this return true when this Command no longer needs to run execute()
bool LiftToAngle::IsFinished() {
	return ((shooter->ShooterAngle() > m_targetAngle -POT_RANGE) && (shooter->ShooterAngle() < m_targetAngle + POT_RANGE));
}

// Called once after isFinished returns true
void LiftToAngle::End() {
	shooter->AngleControlMotorSpeed(0.0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void LiftToAngle::Interrupted() {
	shooter->AngleControlMotorSpeed(0.0);
}
