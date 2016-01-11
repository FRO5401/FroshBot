/*
 * DriveBase.cpp
 *
 *  Created on: Jul 13, 2015
 *      Author: KJM
 * Skid Steer for 2015 Summer Froshbot
 *
 *
 */
#include "DriveBase.h"
#include "../RobotMap.h"
#include "../Commands/PSControllerMove.h"

DriveBase::DriveBase() :	Subsystem("DriveBase")
{

  LeftDrive 	= new Talon(MotorLeft);
  RightDrive 	= new Talon(MotorRight);

}
  void DriveBase::InitDefaultCommand()
  {
	  //Default function when class is first created
		SetDefaultCommand(new PSControllerMove());

  }

void DriveBase::Drive(double LeftDriveDesired, double RightDriveDesired) //axes of joystick
  {

  LeftDrive 	-> Set(LeftDriveDesired); //passes desired state to speed controllers
  RightDrive 	-> Set(RightDriveDesired);

  }

  void DriveBase::Stop()
  {

  LeftDrive		-> Set(0);
  RightDrive	-> Set(0);

  }
//}
/*End Skidsteer subsystem
 *
 */
