#ifndef ARMUP_H
#define ARMUP_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author Programming-1
 */

class ArmUp: public CommandBase {
private:
	double potangle;
public:
	ArmUp();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
