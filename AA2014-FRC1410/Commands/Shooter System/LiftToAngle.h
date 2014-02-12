#ifndef LIFTTOANGLE_H
#define LIFTTOANGLE_H

#include "../../CommandBase.h"
#include "../../Robotmap.h"

/**
 *
 *
 * @author fifthparallel
 */
class LiftToAngle: public CommandBase {
	float m_targetAngle;
public:
	LiftToAngle(float angle);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
