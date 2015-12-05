#include "WPILib.h"
#include "Commands/Command.h"
#include "Commands/PSControllerMove.h"
#include "Commands/GreenMode.h"
#include "Commands/RedMode.h"
#include "CommandBase.h"
//Include includes for each and every command
//OMFG Please work!!  Pretty please!!!
class Robot: public IterativeRobot
{
private:
	Command *autonomousCommand;
	LiveWindow *lw;
	//Below is for
		SendableChooser *autoMode;
//		CommandGroup *GreenMode;
//		CommandGroup *RedMode;


	void RobotInit()
	{
		CommandBase::init();
		//autonomousCommand = new ExampleCommand();
		lw = LiveWindow::GetInstance();
		autoMode = new SendableChooser();
		autoMode->AddDefault("Default-Green", new GreenMode());

		autoMode->AddObject("Red", new RedMode());
//		autonomousCommand = new AutonomousCommandGroup();
		SmartDashboard::PutData("Autonomous Mode", autoMode);
		lw =LiveWindow::GetInstance();
	}
	
	void DisabledPeriodic()
	{
		Scheduler::GetInstance()->Run();
	}

	void AutonomousInit()
	{
		if (autonomousCommand != NULL)
			autonomousCommand = (Command *) autoMode->GetSelected();
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
	}

	void TeleopPeriodic()
	{
		Scheduler::GetInstance()->Run();
	}

	void TestPeriodic()
	{
		lw->Run();
	}
};

START_ROBOT_CLASS(Robot);

