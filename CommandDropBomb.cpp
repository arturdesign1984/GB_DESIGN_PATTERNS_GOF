#include "CommandDropBomb.h"

void CommandDropBomb::Execute()
    {
        if (*bombsNumber > 0)
    {
        MyTools::WriteToLog(std::string(__FUNCTION__) + " was invoked");

        double x = pPlane->GetX() + 4;
        double y = pPlane->GetY() + 2;

        Bomb* pBomb = new BombDecorator;
        pBomb->SetDirection(0.3, 1);
        pBomb->SetSpeed(2);
        pBomb->SetPos(x, y);
        pBomb->SetWidth(SMALL_CRATER_SIZE);

        vecDynamicObj->push_back(pBomb);
        bombsNumber--;
        score -= Bomb::BombCost;
    }
    }