#ifndef FeederLift_H
#define FeederLift_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class FeederLift: public Subsystem
{
private:
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
	DoubleSolenoid *rightPneumaticLift;
	DoubleSolenoid *leftPneumaticLift;
	Compressor *mainCompressor;

public:
	FeederLift();
	void InitDefaultCommand();
	void Lift();
	void Lower();
};


#endif
