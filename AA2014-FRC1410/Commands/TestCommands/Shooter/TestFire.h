#ifndef TESTFIRE_H
#define TESTFIRE_H

#include "../../../CommandBase.h"

/**
 *
 *
 * @author fifthparallel
 */
class TestFire: public CommandBase {
	Timer *timer;
public:
	TestFire();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
