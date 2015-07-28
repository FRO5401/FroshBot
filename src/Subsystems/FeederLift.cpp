#include <Subsystems/FeederLift.h>
#include "../RobotMap.h"

FeederLift::FeederLift() :
		Subsystem("FeederLift")
{
	rightPneumaticLift 	= 	new DoubleSolenoid(SOL_CAN_ID, rightPneumaticLift_Forward, rightPneumaticLift_Reverse);
	leftPneumaticLift 	= 	new DoubleSolenoid(SOL_CAN_ID, leftPneumaticLift_Forward, leftPneumaticLift_Reverse);
	mainCompressor 		= 	new Compressor();
}

void FeederLift::InitDefaultCommand()
{
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
}

// Put methods for controlling this subsystem
// here. Call these from Commands.
void FeederLift::Lift()
{
	rightPneumaticLift 	-> 	Set(DoubleSolenoid::Value::kReverse);
	leftPneumaticLift 	-> 	Set(DoubleSolenoid::Value::kReverse);
}

void FeederLift::Lower()
{
	rightPneumaticLift	-> 	Set(DoubleSolenoid::Value::kForward);
	leftPneumaticLift 	->	Set(DoubleSolenoid::Value::kForward);
}
