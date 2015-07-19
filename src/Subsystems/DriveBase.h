/*
 * DriveBase.h
 * Basic skid drive system
 */

#ifndef SRC_SUBSYSTEMS_DRIVEBASE_H_
#define SRC_SUBSYSTEMS_DRIVEBASE_H_

#include "Commands/Subsystem.h"
#include "WPILib.h"

class DriveBase: public Subsystem
{
//private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	Talon *LeftDrive;
	Talon *RightDrive;

	DriveBase();
	void InitDefaultCommand();
	void Drive(double, double);
	void Stop();
};



#endif /* SRC_SUBSYSTEMS_DRIVEBASE_H_ */
