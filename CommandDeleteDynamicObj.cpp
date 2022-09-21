#include "CommandDeleteDynamicObj.h"

void CommandDeleteDynamicObj::Execute()
{
	auto it = this->vecDynamicObj->begin();
	for (; it != this->vecDynamicObj->end(); it++)
	{
		if (*it == dObj)
		{
			this->vecDynamicObj->erase(it);
			break;
		}
	}
}