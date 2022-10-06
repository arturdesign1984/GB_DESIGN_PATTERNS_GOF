#pragma once

#include "DynamicObject.h"
#include <vector>
#include "DestroyableGroundObject.h"


class Bomb : public DynamicObject
{
public:
	~Bomb()
	{
		for (auto i = 0; i < observers.size(); i++)
		{	
			RemoveObserver();
		}
	}
	static const uint16_t BombCost = 10;

	void Draw() const override;
	void AddObserver(DestroyableGroundObject* sb);
	void RemoveObserver();
	DestroyableGroundObject* CheckDestoyableObjects();

private:
	std::vector<DestroyableGroundObject*> observers;
};

