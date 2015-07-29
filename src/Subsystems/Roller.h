/*
 * Roller.h
 *
 *  Created on: Jul 28, 2015
 *      Author: Developer
 */

#ifndef SRC_SUBSYSTEMS_ROLLER_H_
#define SRC_SUBSYSTEMS_ROLLER_H_

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Roller: public Subsystem
{

public:
	Victor *FeederRoller;

	Roller();
	void Forward();
	void Reverse();

};



#endif /* SRC_SUBSYSTEMS_ROLLER_H_ */
