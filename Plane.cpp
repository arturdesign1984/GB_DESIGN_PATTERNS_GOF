
#include <iostream>

#include "Plane.h"
#include "MyTools.h"
#include "ScreenSingleton.h"

using namespace std;
using namespace MyTools;

void Plane::Draw() const
{
    MyTools::SetColor(CC_LightBlue);
    ScreenSingleton::GetInstance().GotoXY(x, y);
    cout << "=========>";
    ScreenSingleton::GetInstance().GotoXY(x - 2, y - 1);
    cout << "===";
    ScreenSingleton::GetInstance().GotoXY(x + 3, y - 1);
    cout << "\\\\\\\\";
    ScreenSingleton::GetInstance().GotoXY(x + 3, y + 1);
    cout << "////";
}
