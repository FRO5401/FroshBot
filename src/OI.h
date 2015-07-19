#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI
{
private:

public:
//	Joystick *Logitech3DPro;
//	Joystick *XBoxController;
	Joystick *PSController;
	Button *One;
	Button *Two;
	Button *Three;
	Button *Four;
	Button *LTrig1;
	Button *RTrig1;
	Button *LTrig2;
	Button *RTrig2;
	Button *Nine;
	Button *Ten;

	OI();
    double ReadJoystickX();
    double ReadJoystickY();
//    double ReadJoystickZ();
};

#endif
