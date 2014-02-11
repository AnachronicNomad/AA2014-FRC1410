#ifndef PULLBACK_H
#define PULLBACK_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author fifthparallel
 */
class PullBack: public CommandBase {
public:
	PullBack();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
