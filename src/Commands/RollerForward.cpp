/*
 * RollerCommandForward.cpp
 *
 *  Created on: Aug 4, 2015
 *      Author: Developer
 */
#include "RollerCommand.h"
#include "RobotMap.h"

Roller::Roller()
{
	Requires(roller);
}

void Roller::Initialize()
{
	roller -> Forward();
}

void Roller::Execute()
{
	roller -> Forward();
}

bool Roller::IsFinished()
{
	return false;
}

void Roller::End()
{

}

void Roller::Interrupted()
{

}
