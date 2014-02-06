#ifndef TELEOPMECANUM_H
#define TELEOPMECANUM_H

#include "../../CommandBase.h"

/**
 *
 *
 * @author Isaac
 */
class TeleOpMecanum: public CommandBase {
public:
	TeleOpMecanum();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
};

#endif
