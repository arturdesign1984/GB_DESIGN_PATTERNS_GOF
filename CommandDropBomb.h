#pragma once

#include "Command.h"
#include "SBomber.h"
#include "MyTools.h"
#include "BombDecorator.h"

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

    void Execute() override;
};