
#include "AutoFwd.h"
#include "RobotMap.h"
#include "GreenMode.h"
#include "RedMode.h"
#include "CommandBase.h"
//Include all commands being invoked in the commandgroup


AutoFwd::AutoFwd()
{
	//The last command override the first instantly because there is no wait
	AddSequential(new GreenMode());
//	AddSequential(new RedMode());

}
