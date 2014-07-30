#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
private:
	Joystick *stick1;
	Joystick *stick2;
	
	JoystickButton *toggle_roller;
	JoystickButton *arm_up;
	JoystickButton *arm_down;
	
	JoystickButton *fire;
	/**
	JoystickButton *shooter_down;
	JoystickButton *shooter_up;
	**/
	JoystickButton *pullback;
	
	JoystickButton *elev_toggle;
public:
	OI();
	double OI::GetDriverStickAxis(bool driver, int axis);
};

#endif
