
#include <iostream>

#include "House.h"
#include "MyTools.h"
#include "ScreenSingleton.h"
#include "Director.h"
#include "HouseBlocks.h"
#include "HouseBuilder.h"
#include "ModernHouseBuilder.h"
#include "DefaultHouseBuilder.h"

using namespace std;
using namespace MyTools;

bool House::isInside(double x1, double x2) const
{
	const double XBeg = x + 2;
	const double XEnd = x + width - 1;

	if (x1 < XBeg && x2 > XEnd)
	{
		return true;
	}

	if (x1 > XBeg && x1 < XEnd)
	{
		return true;
	}

	if (x2 > XBeg && x2 < XEnd)
	{
		return true;
	}

	return false;
}

void House::Draw() const
{
	Director dir;

	// DefaultHouseBuilder dh_buider;
	ModernHouseBuilder mh_buider;
	// HouseBlocks *dh = dir.createHouse(dh_buider);
	HouseBlocks *mh = dir.createHouse(mh_buider);

	MyTools::SetColor(CC_Yellow);
	ScreenSingleton::GetInstance().GotoXY(x, y - 5);
	cout << mh->getHouse()->at(0);
	ScreenSingleton::GetInstance().GotoXY(x, y - 4);
	cout << mh->getHouse()->at(1);
	ScreenSingleton::GetInstance().GotoXY(x, y - 3);
	cout << mh->getHouse()->at(2);
	ScreenSingleton::GetInstance().GotoXY(x, y - 2);
	cout << mh->getHouse()->at(3);
	ScreenSingleton::GetInstance().GotoXY(x, y - 1);
	cout << mh->getHouse()->at(4);
	ScreenSingleton::GetInstance().GotoXY(x, y);
	cout << mh->getHouse()->at(5);
}