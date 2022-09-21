#pragma once

#include "Bomb.h"
#include "RealBomb.h"
#include "MyTools.h"
#include "ScreenSingleton.h"

class BombDecorator : public Bomb
{
private:
    Bomb *pBomb;

public:
    BombDecorator(){
        pBomb = new RealBomb;
        pBomb->SetSpeed(4);
    }
    ~BombDecorator(){
        delete pBomb;
    }
    void Draw() const override;
};