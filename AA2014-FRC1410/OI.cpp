#include "OI.h"

OI::OI() {
	// Process operator interface input here.
	stick1 = new Joystick(1);
	stick2 = new Joystick(2);
	
	fire = new JoystickButton(stick2, 6);
}
int OI::GetStickAxis(int axis1, int axis2, int axis3)
{
      return stick1->GetRawAxis(axis1);
      return stick1->GetRawAxis(axis2);
      return stick1->GetRawAxis(axis3);
}

