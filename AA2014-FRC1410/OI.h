#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
private:
	Joystick *stick1;
	Joystick *stick2;
	
	JoystickButton *toggle_roller;
	JoystickButton *fire;
public:
	OI();
	double OI::GetDriverStickAxis(int axis);
	
};

#endif
