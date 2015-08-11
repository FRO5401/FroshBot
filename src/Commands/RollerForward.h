/*
 * RollerCommandForward.h
 *
 *  Created on: Aug 4, 2015
 *      Author: Developer
 */

#ifndef SRC_COMMANDS_ROLLERFORWARD_H_
#define SRC_COMMANDS_ROLLERFORWARD_H_

#include "../CommandBase.h"
#include "WPILib.h"

class RollerForwards: public CommandBase
{
public:
	Roller();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif /* SRC_COMMANDS_ROLLERFORWARD_H_ */
