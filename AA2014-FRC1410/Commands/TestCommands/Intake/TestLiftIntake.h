#ifndef TESTLIFTINTAKE_H
#define TESTLIFTINTAKE_H

#include "../../../CommandBase.h"

/**
 *
 *
 * @author fifthparallel
 */
class TestLiftIntake: public CommandBase {
	bool m_up;
public:
	TestLiftIntake(bool up);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
