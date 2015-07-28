#ifndef ROBOTMAP_H
#define ROBOTMAP_H

#include "WPILib.h"

/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */

/********************************
 *Input Joysticks Section
 *Unused controllers are commented out, no channel assigned, but left for code reuse
********************************/

//const int Logitech3D_Channel		=	0;	//Commented out, no channel assigned
//const int XBoxController_Channel	=	;	//Commented out, no channel assigned
const int PSController_Channel		=	0;//Main controller for Froshbot
/********************************
 *End Joysticks
********************************/

/********************************
 *Speed Controller Section
********************************/

const int MotorLeft 	= 1;
const int MotorRight 	= 0;

const double Full = 1;

/********************************
 *End Speed Controllers
********************************/

/****************************
 * Feeder Lift Pneumatics
 ***************************/
const int SOL_CAN_ID = 0;
const int leftPneumaticLift_Forward = 0;
const int leftPneumaticLift_Reverse = 1;
const int rightPneumaticLift_Forward = 2;
const int rightPneumaticLift_Reverse = 3;


/****************************
 * Feeder Motors
 ****************************/
const int FeederMotorLeft = 3;
const int FeederMotorRight = 4;


#endif
