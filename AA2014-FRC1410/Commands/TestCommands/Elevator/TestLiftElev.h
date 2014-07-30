#ifndef TESTLIFTELEV_H
#define TESTLIFTELEV_H

#include "../../../CommandBase.h"

/**
 *
 *
 * @author fifthparallel
 */
class TestLiftElev: public CommandBase {
	bool m_up;
public:
	TestLiftElev();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
