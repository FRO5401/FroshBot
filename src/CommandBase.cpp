#include "CommandBase.h"
#include "Subsystems/DriveBase.h"
#include "Commands/Scheduler.h"

// Initialize a single static instance of all of your subsystems to NULL
DriveBase* CommandBase::drivebase = NULL;
OI* CommandBase::oi = NULL;
FeederLift     *CommandBase::feederlift     = NULL;
MotorFeeder *CommandBase::motorfeeder     = NULL;

CommandBase::CommandBase(char const *name) :
		Command(name)
{
}

CommandBase::CommandBase() :
		Command()
{

}

void CommandBase::init()
{
	// Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	drivebase = new DriveBase();
	feederlift = new FeederLift();
	motorfeeder = new MotorFeeder();

	oi = new OI();
}
