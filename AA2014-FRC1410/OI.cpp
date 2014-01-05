#include "OI.h"

OI::OI() {
	// Process operator interface input here.
	stick1 = new Joystick(1);
	stick2 = new Joystick(2);
	
	fire = new JoystickButton(stick2, 6);
}
