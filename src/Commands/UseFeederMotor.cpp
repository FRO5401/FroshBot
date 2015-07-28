#include "UseFeederMotor.h"
#include "OI.h"

UseFeederMotor::UseFeederMotor()
{
	// Use Requires() here to declare subsystem dependencies
	Requires(motorfeeder);
}

// Called just before this Command runs the first time
void UseFeederMotor::Initialize()
{//Returning error "undefined reference to 'motorfeeder::..." commented out functions
//	motorfeeder -> FeedIn(0.5);
}

// Called repeatedly when this Command is scheduled to run
void UseFeederMotor::Execute()
{
//Uses First Right Trigger to feed in
/*	if(JoystickButton(6))
	{
		motorfeeder -> FeedIn(0.5);
	}
//Uses Second Right Trigger to feed out
	if(JoystickButton(8))
	{
		motorfeeder -> FeedOut(0.5);
	}*/
}

// Make this return true when this Command no longer needs to run execute()
bool UseFeederMotor::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void UseFeederMotor::End()
{

}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void UseFeederMotor::Interrupted()
{

}
