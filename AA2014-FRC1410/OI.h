#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
private:
	Joystick *stick1;
	Joystick *stick2;
	
	JoystickButton *toggle_roller;
	JoystickButton *fire;
	JoystickButton *arm_up;
	JoystickButton *arm_down;
public:
	OI();
	double OI::GetDriverStickAxis(int axis);
	double OI::GetCoPilotStickAxis(int axis);
};

#endif
