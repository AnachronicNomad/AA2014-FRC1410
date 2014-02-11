#ifndef FIRE_H
#define FIRE_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author fifthparallel
 */
class Fire: public CommandBase {
	Timer* m_timer;
public:
	Fire();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
