#pragma once

#include "Command.h"
#include "SBomber.h"
#include "MyTools.h"

class CommandDropBomb : public Command
{
private:
    std::vector<DynamicObject *> *vecDynamicObj;
    uint16_t *bombsNumber;
    int16_t *score;
    Plane *pPlane;

public:
    CommandDropBomb(std::vector<DynamicObject *> &vecDynamicObj, uint16_t &bombsNumber, int16_t &score, Plane *pPlane)
    : vecDynamicObj(&vecDynamicObj), bombsNumber(&bombsNumber), score(&score), pPlane(pPlane){}

    void Execute() override
    {
        if (*bombsNumber > 0)
    {
        MyTools::WriteToLog(std::string(__FUNCTION__) + " was invoked");

        double x = pPlane->GetX() + 4;
        double y = pPlane->GetY() + 2;

        Bomb* pBomb = new Bomb;
        pBomb->SetDirection(0.3, 1);
        pBomb->SetSpeed(2);
        pBomb->SetPos(x, y);
        pBomb->SetWidth(SMALL_CRATER_SIZE);

        vecDynamicObj->push_back(pBomb);
        bombsNumber--;
        score -= Bomb::BombCost;
    }
    }
};