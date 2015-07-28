#ifndef MotorFeeder_H
#define MotorFeeder_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class MotorFeeder: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities


public:
	Victor *LeftFeederMotor;
	Victor *RightFeederMotor;
	MotorFeeder();
	void InitDefaultCommand();
	void FeedIn(float speed);
	void FeedOut(float speed);
};

#endif
