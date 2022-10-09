
#include <conio.h>

#include "SBomber.h"
#include "MyTools.h"
#include "ScreenSingleton.h"
#include "FileLogger.h"

using namespace std;

//========================================================================================================================

FileLogger logger("log.txt");

int main(void)
{
    // MyTools::OpenLogFile("log.txt");

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

    // MyTools::CloseLogFile();

    return 0;
}
