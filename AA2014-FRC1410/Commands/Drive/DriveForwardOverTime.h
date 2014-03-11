#ifndef DRIVEFORWARDOVERTIME_H
#define DRIVEFORWARDOVERTIME_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author fifthparallel
 */
class DriveForwardOverTime: public CommandBase {
	float m_time;
	Timer *timer;
public:
	DriveForwardOverTime(float time);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
