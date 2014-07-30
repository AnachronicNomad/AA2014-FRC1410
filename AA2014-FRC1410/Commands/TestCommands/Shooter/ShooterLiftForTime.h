#ifndef SHOOTERLIFTFORTIME_H
#define SHOOTERLIFTFORTIME_H

#include "../../../CommandBase.h"

/**
 *
 *
 * @author fifthparallel
 */
class ShooterLiftForTime: public CommandBase {
	double m_time;
	Timer *timer;
public:
	ShooterLiftForTime(double time);
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
