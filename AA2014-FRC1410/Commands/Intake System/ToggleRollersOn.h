#ifndef TOGGLEROLLERSON_H
#define TOGGLEROLLERSON_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author Programming-1
 */
class ToggleRollersOn: public CommandBase {
private:
	bool toggle;
public:
	ToggleRollersOn();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
