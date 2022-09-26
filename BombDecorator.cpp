#include "BombDecorator.h"

void BombDecorator::Draw() const
{
    MyTools::SetColor(MyTools::CC_LightMagenta);
    ScreenSingleton::GetInstance().GotoXY(x , y);
    std::cout << "*";
    MyTools::SetColor(MyTools::CC_Cyan);
    ScreenSingleton::GetInstance().GotoXY(x , y+1);
    std::cout << "#";
}