#ifndef ARMOPERATORCONTROL_H
#define ARMOPERATORCONTROL_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author Programming-1
 */
class ArmOperatorControl: public CommandBase {
private:
	double potangle;
public:
	ArmOperatorControl();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
