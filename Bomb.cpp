
#include <iostream>

#include "Bomb.h"
#include "MyTools.h"
#include "ScreenSingleton.h"

using namespace std;
using namespace MyTools;

void Bomb::Draw()
{
    MyTools::SetColor(CC_LightMagenta);
    ScreenSingleton::GetInstance().GotoXY(x, y);
    cout << "*";
}