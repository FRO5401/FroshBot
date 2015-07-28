#include "ToFeederLift.h"
#include "RobotMap.h"
#include "OI.h"

ToFeederLift::ToFeederLift()
{
	// Use Requires() here to declare subsystem dependencies
	Requires(feederlift);
}

// Called just before this Command runs the first time
void ToFeederLift::Initialize()
{
//Tests if the feeder lift is working before starting
	feederlift -> Lift();
}

// Called repeatedly when this Command is scheduled to run
void ToFeederLift::Execute()
{
// Uses first left trigger to lift
/*	if(JoystickButton(5))
	{
		feederlift -> Lift();
	}

// Uses second left trigger to lower
	if(JoystickButton(7))
	{
		feederlift -> Lower();
	}*/
}

// Make this return true when this Command no longer needs to run execute()
bool ToFeederLift::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void ToFeederLift::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ToFeederLift::Interrupted()
{

}
