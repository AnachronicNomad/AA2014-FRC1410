#ifndef LIFTTOANGLE_H
#define LIFTTOANGLE_H

#include "../../../CommandBase.h"

/**
 *
 *
 * @author fifthparallel
 */
class LiftToAngle: public CommandBase {
	int m_angle;
public:
	LiftToAngle(int angle);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
