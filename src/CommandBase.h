#ifndef COMMAND_BASE_H
#define COMMAND_BASE_H

#include <string>
#include "Commands/Command.h"
#include "Subsystems/DriveBase.h"
#include "OI.h"
#include "WPILib.h"
#include "Subsystems/FeederLift.h"
#include "Subsystems/MotorFeeder.h"
//include includes for each subsystem
/**
 * The base for all commands. All atomic commands should subclass CommandBase.
 * CommandBase stores creates and stores each control system. To access a
 * subsystem elsewhere in your code in your code use CommandBase.examplesubsystem
 */
class CommandBase: public Command
{
public:
	CommandBase(char const *name);
	CommandBase();
	static void init();
	// Create a single static instance of all of your subsystems
	static DriveBase *drivebase;
	static OI *oi;
	static FeederLift *feederlift;
	static MotorFeeder *motorfeeder;
};

#endif
