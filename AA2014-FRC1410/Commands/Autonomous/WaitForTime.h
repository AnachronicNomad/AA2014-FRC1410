#ifndef WAITFORTIME_H
#define WAITFORTIME_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author fifthparallel
 */
class WaitForTime: public CommandBase {
	float m_time;
	Timer *timer;
public:
	WaitForTime(float time);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
