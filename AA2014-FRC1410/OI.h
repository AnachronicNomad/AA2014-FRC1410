#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
private:
	Joystick *stick1;
	Joystick *stick2;
	
	JoystickButton *fire;
public:
	OI();
	int OI::GetStickAxis(int axis1, int axis2, int axis3);
};

#endif
