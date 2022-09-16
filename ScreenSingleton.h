#pragma once

#include <conio.h>
#include <windows.h>
#include <stdint.h>
#include <string>
#include <iostream>
#include <fstream>
#include <chrono>

class ScreenSingleton
{
private:
    ScreenSingleton(){};
    ScreenSingleton(const ScreenSingleton &ss) = delete;
    ScreenSingleton &operator=(const ScreenSingleton&) = delete;

public:
    static ScreenSingleton& GetInstance()
    {
        static ScreenSingleton theInstance;
        return theInstance;
    }

    void ClrScr();
	void __fastcall GotoXY(double x, double y);
	uint16_t GetMaxX();
	uint16_t GetMaxY();
};