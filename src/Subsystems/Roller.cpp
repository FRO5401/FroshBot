/*
 * Roller.cpp
 *
 *  Created on: Jul 28, 2015
 *      Author: Developer
 */
#include "Roller.h"
#include "../RobotMap.h"
#include "../Commands/PSControllerMove.h"

Roller::Roller() :  Subsystem("Roller")
{
	FeederRoller = new Victor(MotorRoller);
}

void Roller::Forward()
{
	FeederRoller -> Set(1);
}

void Roller::Reverse()
{
	FeederRoller -> Set(-1);
}
