#include "PSControllerMove.h"
#include "RobotMap.h"
#include "SmartDashboard/SmartDashboard.h"

PSControllerMove::PSControllerMove()
{
	//Declares required subsystems
	Requires(drivebase);

}

// Called just before this Command runs the first time
void PSControllerMove::Initialize()
{
//	drivebase->Stop();
}

// Called repeatedly when this Command is scheduled to run
void PSControllerMove::Execute()
{
	const double Half = 0.5 * Full; //Constant for throttling half speed. Full defined in RobotMap
	double Slew		=	oi 	->ReadJoystickX();
	double Throttle	=	oi 	->ReadJoystickY();
	double Left 	= 0;
	double Right 	= 0;
	if(Throttle == 1){
		if(Slew == -1){ 		// (-1,1) - Diagonal up-left
			Left	= Half;
			Right	= Full;
		} else if(Slew == 1){	// (1,1) - Diagonal up-right
			Left	= Full;
			Right	= Half;
		} else {				// (not1/not-1,1) - Straight up
			Left	= Full;
			Right	= Full;
		}
	} else 	if(Throttle == -1){
		if(Slew == -1){ 		// (-1,-1) - Diagonal down-left
			Left	= -1* Half;
			Right	= -1* Full;
		} else if(Slew == 1){	// (1,-1) - Diagonal down-right
			Left	= -1* Full;
			Right	= -1* Half;
		} else {				// (not1/not-1,-1) - Straight down
			Left	= -1* Full;
			Right	= -1* Full;
		}
	} else 	if(Slew == -1){ 		// (-1,not 1/not -1) - Straight left
		Left	= -1* Half;
		Right	= -1* Full;
	} else if(Slew == 1){	// (1,not 1/not -1) - Straight right
		Left	= -1* Full;
		Right	= -1* Half;
	} else {				// (not1/not-1,not 1/not -1) - No Direction
		Left	= 0;
		Right	= 0;
	}

	SmartDashboard::PutNumber("X-Axis", Slew);
	SmartDashboard::PutNumber("Y-Axis", Throttle);

	drivebase	-> Drive(Left, Right);
}

// Make this return true when this Command no longer needs to run execute()
bool PSControllerMove::IsFinished()
{
	return false;
}

// Called once after isFinished returns true
void PSControllerMove::End()
{
	drivebase	-> Drive(0, 0);
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void PSControllerMove::Interrupted()
{

}
