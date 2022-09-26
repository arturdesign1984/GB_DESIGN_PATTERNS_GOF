#include "TankAdaptee.h"

void TankAdaptee::Paint()
{
    MyTools::SetColor(MyTools::CC_DarkGray);
	ScreenSingleton::GetInstance().GotoXY(x, y - 3);
	std::cout << "    #####";
	ScreenSingleton::GetInstance().GotoXY(x, y - 2);
	std::cout << "#####   #";
	ScreenSingleton::GetInstance().GotoXY(x, y - 1);
	std::cout << "    #####";
	ScreenSingleton::GetInstance().GotoXY(x,y);
	std::cout << " ###########";
}
bool __fastcall TankAdaptee::isInRange(double x1, double x2) const
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