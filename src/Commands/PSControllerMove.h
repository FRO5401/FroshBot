#ifndef PSControllerMove_H
#define PSControllerMove_H

#include "../CommandBase.h"
#include "WPILib.h"

class PSControllerMove: public CommandBase
{
public:
	PSControllerMove();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif
