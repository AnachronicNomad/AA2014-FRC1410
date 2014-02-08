#ifndef ARMDOWN_H
#define ARMDOWN_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author Programming-1
 */
class ArmDown: public CommandBase {
private:
	double potangle;
public:
	ArmDown();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
