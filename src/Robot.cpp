#include "WPILib.h"
#include "Commands/Command.h"
#include "CommandBase.h"
#include "OI.h"
//Include includes for each and every command
#include "Commands/PSControllerMove.h"

class Robot: public IterativeRobot
{
private:
	Command *autonomousCommand;
	LiveWindow *lw;

	void RobotInit()
	{
		CommandBase::init();
		//autonomousCommand = new ExampleCommand();
		lw = LiveWindow::GetInstance();
		SmartDashboard::init();

	}
	
	void DisabledPeriodic()
	{
		Scheduler::GetInstance()->Run();
	}

	void AutonomousInit()
	{
		if (autonomousCommand != NULL)
			autonomousCommand->Start();
	}

	void AutonomousPeriodic()
	{
		Scheduler::GetInstance()->Run();
	}

	void TeleopInit()
	{
		// This makes sure that the autonomous stops running when
		// teleop starts running. If you want the autonomous to 
		// continue until interrupted by another command, remove
		// this line or comment it out.
		if (autonomousCommand != NULL)
			autonomousCommand->Cancel();
//		PutDashboard();
	}

	void TeleopPeriodic()
	{
		Scheduler::GetInstance()->Run();
		SmartDashboard::PutNumber("X-Axis",	CommandBase::oi 	->ReadJoystickX());
		SmartDashboard::PutNumber("Y-Axis",	CommandBase::oi 	->ReadJoystickY());

	}

	void TestPeriodic()
	{
		lw->Run();
	}
};

START_ROBOT_CLASS(Robot);

