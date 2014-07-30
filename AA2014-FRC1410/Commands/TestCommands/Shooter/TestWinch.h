#ifndef TESTWINCH_H
#define TESTWINCH_H

#include "../../../CommandBase.h"

/**
 *
 *
 * @author fifthparallel
 */
class TestWinch: public CommandBase {
public:
	TestWinch();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
