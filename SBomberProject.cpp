
#include <conio.h>

#include "SBomber.h"
#include "MyTools.h"
#include "ScreenSingleton.h"
#include "FileLoggerSingleton.h"
#include "FileLoggerSingletonProxyTime.h"

using namespace std;

//========================================================================================================================

int main(void)
{
    FileLoggerSingletonProxyTime::GetInstance().OpenLogFile("log.txt");

    SBomber game;

    do {
        game.TimeStart();

        if (_kbhit())
        {
            game.ProcessKBHit();
        }

        ScreenSingleton::GetInstance().ClrScr();

        game.DrawFrame();
        game.MoveObjects();
        game.CheckObjects();

        game.TimeFinish();

    } while (!game.GetExitFlag());

    FileLoggerSingletonProxyTime::GetInstance().CloseLogFile();

    return 0;
}
