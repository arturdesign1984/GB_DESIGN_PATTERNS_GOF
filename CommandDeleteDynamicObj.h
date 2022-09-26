#pragma once

#include "Command.h"
#include "SBomber.h"

class CommandDeleteDynamicObj : public Command
{
private:
	std::vector<DynamicObject*> *vecDynamicObj;
	DynamicObject *dObj;

public:
	CommandDeleteDynamicObj(std::vector<DynamicObject *> &vecDynamicObj, DynamicObject *dObj) : vecDynamicObj(&vecDynamicObj), dObj(dObj){}
	void Execute() override;
};