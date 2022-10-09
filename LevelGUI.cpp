#include <iostream>
#include <cstring>

#include "LevelGUI.h"
#include "MyTools.h"
#include "ScreenSingleton.h"

using namespace std;
using namespace MyTools;

void LevelGUI::Draw() const
{
    MyTools::SetColor(CC_White);

    ScreenSingleton::GetInstance().GotoXY(x, y);
    char* buf = new (nothrow) char[width + 1];
    if (buf == nullptr)
    {
        return;
    }
    memset(buf, '+', width);
    buf[width] = '\0';
    cout << buf;
    ScreenSingleton::GetInstance().GotoXY(x, y + height);
    cout << buf;
    delete [] buf;
    buf = nullptr;
    
    for (size_t i = size_t(y); i < height + y; i++)
    {
        ScreenSingleton::GetInstance().GotoXY(x, (double)i);
        cout << "+";
        ScreenSingleton::GetInstance().GotoXY(x + width - 1, (double)i);
        cout << "+";
    }

    if (!duration)
    {
        ScreenSingleton::GetInstance().GotoXY(5, height + 2);
        cout << m->TakeFromTheQueue();
    }
    ScreenSingleton::GetInstance().GotoXY(3, 1);
    cout << "FramePerSecond: " << static_cast<int>(fps / (passedTime / 1000.0));
    ScreenSingleton::GetInstance().GotoXY(25, 1);
    cout << "PassedTime: " << static_cast<int>(passedTime / 1000.0) << " sec";
    ScreenSingleton::GetInstance().GotoXY(46, 1);
    cout << "BombsNum: " << bombsNumber;
    ScreenSingleton::GetInstance().GotoXY(62, 1);
    cout << "Score: " << score;
}

void __fastcall LevelGUI::SetParam(uint64_t passedTimeNew, uint64_t fpsNew, uint16_t bombsNumberNew, int16_t scoreNew)
{
    passedTime = passedTimeNew;
    duration += passedTimeNew;
    if(duration > 2500)
    {
        duration = 0;
    }
    fps = fpsNew;
    bombsNumber = bombsNumberNew;
    score = scoreNew;
}

void LevelGUI::SetMediator(Mediator* pMed)
{
    m = pMed;
    m->SetQueue(this->GetQueue());
}
