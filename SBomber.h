#pragma once

#include <vector>
#include <conio.h>
#include <windows.h>

#include "LevelGUI.h"
#include "Plane.h"
#include "Bomb.h"
#include "Ground.h"
#include "Tank.h"
#include "MyTools.h"
#include "House.h"
#include "ScreenSingleton.h"

class SBomber
{
public:

    SBomber();
    ~SBomber();

    bool GetExitFlag() const;

    void ProcessKBHit();
    void TimeStart();
    void TimeFinish();

    void DrawFrame();
    void MoveObjects();
    void CheckObjects();

private:

    class SBomberImpl;
    SBomberImpl *sImpl;
};