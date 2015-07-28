#ifndef ToFeederLift_H
#define ToFeederLift_H

#include "../CommandBase.h"
#include "WPILib.h"

class ToFeederLift: public CommandBase
{
public:
	ToFeederLift();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
