#include "MotorFeeder.h"
#include "../RobotMap.h"
#include "../Commands/UseFeederMotor.h"

MotorFeeder::MotorFeeder() :
		Subsystem("MotorFeeder")
{
	LeftFeederMotor 	= 	new Victor(FeederMotorLeft);
	RightFeederMotor 	= 	new Victor(FeederMotorRight);
}

void MotorFeeder::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	LeftFeederMotor		->	SetSpeed(0.0);
	RightFeederMotor	->	SetSpeed(0.0);
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
void FeedIn(float speed)
{/*Returning error "from this location"??
	MotorFeeder::LeftFeederMotor 	-> SetSpeed(speed);
	MotorFeeder::RightFeederMotor 	-> SetSpeed(-speed);
*/}

void FeedOut(float speed)
{/*Returning error "from this location"??
	MotorFeeder::LeftFeederMotor	-> SetSpeed(-speed);
	MotorFeeder::RightFeederMotor	-> SetSpeed(speed);
*/}
