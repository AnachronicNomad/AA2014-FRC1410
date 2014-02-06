#ifndef TOGGLEROLLER_H
#define TOGGLEROLLER_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author Isaac
 */
class ToggleRoller: public CommandBase {
public:
	ToggleRoller();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
