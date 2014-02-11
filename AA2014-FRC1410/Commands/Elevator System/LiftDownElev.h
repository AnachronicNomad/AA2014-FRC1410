#ifndef LIFTDOWNELEV_H
#define LIFTDOWNELEV_H

#include "../CommandBase.h"

/**
 *
 *
 * @author fifthparallel
 */
class LiftDownElev: public CommandBase {
public:
	LiftDownElev();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
