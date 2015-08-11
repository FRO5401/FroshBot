/*
 * RollerReverse.h
 *
 *  Created on: Aug 4, 2015
 *      Author: Developer
 */

#ifndef SRC_COMMANDS_ROLLERREVERSE_H_
#define SRC_COMMANDS_ROLLERREVERSE_H_

#include "../CommandBase.h"
#include "WPILib.h"

class RollerReverse: public CommandBase
{
public:
	Roller();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif /* SRC_COMMANDS_ROLLERREVERSE_H_ */
