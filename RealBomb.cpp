
#include <iostream>

#include "RealBomb.h"
#include "MyTools.h"
#include "ScreenSingleton.h"

using namespace std;
using namespace MyTools;

void RealBomb::Draw() const
{
    MyTools::SetColor(CC_LightMagenta);
    ScreenSingleton::GetInstance().GotoXY(x, y);
    cout << "*";
}