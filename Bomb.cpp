
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

void __fastcall Bomb::Accept(Visitor & v)
{ 
    v.log(this); 
}