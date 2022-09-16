#include "ScreenSingleton.h"

void ScreenSingleton::ClrScr()
{
	std::system("cls");
}

void __fastcall ScreenSingleton::GotoXY(double x, double y)
{
	const COORD cc = { short(x), short(y) };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cc);
}

uint16_t ScreenSingleton::GetMaxX()
{
    HANDLE hWndConsole;
    if (hWndConsole = GetStdHandle(-12))
    {
        CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
        if (GetConsoleScreenBufferInfo(hWndConsole, &consoleInfo))
        {
            return consoleInfo.srWindow.Right;
            int height = consoleInfo.srWindow.Bottom - consoleInfo.srWindow.Top + 1;
        }
    }

    return 0;
}

uint16_t ScreenSingleton::GetMaxY()
{
    HANDLE hWndConsole;
    if (hWndConsole = GetStdHandle(-12))
    {
        CONSOLE_SCREEN_BUFFER_INFO consoleInfo;
        if (GetConsoleScreenBufferInfo(hWndConsole, &consoleInfo))
        {
            return consoleInfo.srWindow.Bottom;
        }
    }

    return 0;
}