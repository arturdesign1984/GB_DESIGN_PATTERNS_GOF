
#include <iostream>

#include "Bomb.h"
#include "MyTools.h"
#include "ScreenSingleton.h"

using namespace std;
using namespace MyTools;

void Bomb::Draw() const
{
    MyTools::SetColor(CC_LightMagenta);
    ScreenSingleton::GetInstance().GotoXY(x, y);
    cout << "*";
}

void Bomb::AddObserver(DestroyableGroundObject*sb)
{
    observers.push_back(sb);
}

void Bomb::RemoveObserver()
{
    observers.pop_back();
}

DestroyableGroundObject* Bomb::CheckDestoyableObjects()
{
    const double size = this->GetWidth();
    const double size_2 = size / 2;
    const double x1 = this->GetX() - size_2;
    const double x2 = x1 + size;
    for(auto iter : observers)
    {
        if(iter->HandleInsideCheck(x1, x2) != nullptr)
        {
            return iter->HandleInsideCheck(x1, x2);
        }
    }
    return nullptr;
}