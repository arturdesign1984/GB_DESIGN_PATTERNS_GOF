#include "ColorPlane.h"
#include "MyTools.h"
#include "ScreenSingleton.h"

void ColorPlane::DrawBody() const
{
    MyTools::SetColor(MyTools::CC_LightGray);
    ScreenSingleton::GetInstance().GotoXY(x, y);
    std::cout << "=========>";
}
void ColorPlane::DrawWings() const
{
    MyTools::SetColor(MyTools::CC_Red);
    ScreenSingleton::GetInstance().GotoXY(x - 2, y - 1);
    std::cout << "===";
}

void ColorPlane::DrawTail() const
{
    MyTools::SetColor(MyTools::CC_LightMagenta);
    ScreenSingleton::GetInstance().GotoXY(x + 3, y - 1);
    std::cout << "\\\\\\\\";
    ScreenSingleton::GetInstance().GotoXY(x + 3, y + 1);
    std::cout << "////";
}