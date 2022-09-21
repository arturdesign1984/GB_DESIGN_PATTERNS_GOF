#pragma once

#include "Command.h"
#include "SBomber.h"

class CommandDeleteStaticObj : public Command
{
private:
	std::vector<GameObject*> *vecStaticObj;
	GameObject *gObj;

public:
	CommandDeleteStaticObj(std::vector<GameObject *> &vecStaticObj, GameObject *gObj) : vecStaticObj(&vecStaticObj), gObj(gObj) {}
    ~CommandDeleteStaticObj() override
    {
        vecStaticObj = nullptr;
        gObj = nullptr;
    }

    void Execute() override
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
};