#include "OI.h"
#include "RobotMap.h"
#include "Commands/PSControllerMove.h"
//Include h files for all the commands requiring the joysticks

OI::OI()
{
/********************************
 *Joystick declaration section
 *Joysticks are named and declared based on a USB channel found in RobotMap.h
 *Unused joysticks are commented out, no channel assigned, but left for code reuse
********************************/	
//	Logitech3DPro 	= new Joystick(Logitech3D_Channel); //Testing Command based architecture with H-drive from 2015
//	XBoxController 	= new Joystick(XBoxController_Channel); //Commented Out for Froshbot - Using PS Controller
	PSController 	= new Joystick(PSController_Channel); //Froshbot Controller

/********************************
 *Button Definition Section
 *Button Defs have not been created for unused controllers
********************************/
//PS Controller Buttons  
  JoystickButton*	One		=	new JoystickButton(PSController, 1);
					Two		=	new JoystickButton(PSController, 2);
					Three	=	new JoystickButton(PSController, 3);
					Four	=	new JoystickButton(PSController, 4);
					LTrig1	=	new JoystickButton(PSController, 5);
					RTrig1	=	new JoystickButton(PSController, 6);
					LTrig2	=	new JoystickButton(PSController, 7);
					RTrig2	=	new JoystickButton(PSController, 8);
					Nine	=	new JoystickButton(PSController, 9);
					Ten		=	new JoystickButton(PSController, 10);

//End PS Controller Buttons

//Logitech 3D Pro Section
	//No Logitech buttons defined at this time
//End Logitech 3D Pro Section

/********************************
 *Button-Command Association Section
 *Defs have not been created for unused controllers
********************************/
//Froshbot Button Commands
//Uncomment used buttons and replace ExCommand with actual command names
/*
	One		->WhenPressed(new ExCommand());
	Two		->WhenPressed(new ExCommand());
	Three	->WhenPressed(new ExCommand());
	Four	->WhenPressed(new ExCommand());
	LTrig1	->WhenPressed(new ExCommand());
	RTrig1	->WhenPressed(new ExCommand());
	LTrig2	->WhenPressed(new ExCommand());
	RTrig2	->WhenPressed(new ExCommand());
	Nine	->WhenPressed(new ExCommand());
	Ten		->WhenPressed(new ExCommand());
*/

//End PS Controller Buttons

}

/********************************
 *Logitech Joystick reading section
 *Button defs have not been created
********************************/
/*
double OI::ReadJoystickX()
{
	double Slew =	Logitech3DPro	-> GetRawAxis(0);
	return Slew;
}

double OI::ReadJoystickY()
{
	double Throttle =	Logitech3DPro	-> GetRawAxis(1);
	return Throttle;
}

double OI::ReadJoystickZ()
{
	double Twist =	Logitech3DPro	-> GetRawAxis(2);
	return Twist;
}
*/
/********************************
 *End Logitech section
 *
********************************/

/********************************
 *PS Controller reading section
 *Button defs have not been created
********************************/

double OI::ReadJoystickX()
{
	double Slew =	PSController	-> GetRawAxis(0);
	return Slew;
}

double OI::ReadJoystickY()
{
	double Throttle =	PSController-> GetRawAxis(3);
	return Throttle;
}


/********************************
 *End Logitech section
 *
********************************/

