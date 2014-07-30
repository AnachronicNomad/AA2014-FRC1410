#ifndef TOGGLEROLLERS_H
#define TOGGLEROLLERS_H

#include "../../../CommandBase.h"

/**
 *
 *
 * @author fifthparallel
 */
class ToggleRollers: public CommandBase {
	bool toggle;
public:
	ToggleRollers();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
