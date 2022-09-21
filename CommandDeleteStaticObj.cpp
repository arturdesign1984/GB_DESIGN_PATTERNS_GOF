#include "CommandDeleteStaticObj.h"

void CommandDeleteStaticObj::Execute()
{
	auto it = this->vecStaticObj->begin();
	for (; it != this->vecStaticObj->end(); it++)
	{
		if (*it == gObj)
		{
			this->vecStaticObj->erase(it);
			break;
		}
	}
}