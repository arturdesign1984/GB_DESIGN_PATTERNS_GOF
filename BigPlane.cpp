#include "BigPlane.h"
#include "MyTools.h"
#include "ScreenSingleton.h"

void BigPlane::DrawBody() const
{
    MyTools::SetColor(MyTools::CC_LightBlue);
    ScreenSingleton::GetInstance().GotoXY(x, y);
    std::cout << "=========>";
    ScreenSingleton::GetInstance().GotoXY(x, y + 1);
    std::cout << "======";
}
void BigPlane::DrawWings() const
{
    MyTools::SetColor(MyTools::CC_LightBlue);
    ScreenSingleton::GetInstance().GotoXY(x - 2, y - 1);
    std::cout << "====";
}

void BigPlane::DrawTail() const
{
    MyTools::SetColor(MyTools::CC_LightBlue);
    ScreenSingleton::GetInstance().GotoXY(x + 3, y - 1);
    std::cout << "\\\\\\\\";
    ScreenSingleton::GetInstance().GotoXY(x + 2, y + 2);
    std::cout << "////";
}