#ifndef LIFTUPELEV_H
#define LIFTUPELEV_H

#include "../CommandBase.h"

/**
 *
 *
 * @author fifthparallel
 */
class LiftUpElev: public CommandBase {
public:
	LiftUpElev();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
