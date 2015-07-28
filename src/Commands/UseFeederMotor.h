#ifndef UseFeederMotor_H
#define UseFeederMotor_H

#include "../CommandBase.h"
#include "WPILib.h"

class UseFeederMotor: public CommandBase
{
public:
	UseFeederMotor();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
