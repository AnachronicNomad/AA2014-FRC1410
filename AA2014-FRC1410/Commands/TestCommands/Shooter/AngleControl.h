#ifndef ANGLECONTROL_H
#define ANGLECONTROL_H

#include "../../../CommandBase.h"

/**
 *
 *
 * @author fifthparallel
 */
class AngleControl: public CommandBase {
public:
	AngleControl();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
