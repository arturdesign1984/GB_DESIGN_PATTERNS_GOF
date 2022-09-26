#pragma once

#include "Bomb.h"
#include "RealBomb.h"
#include "MyTools.h"
#include "ScreenSingleton.h"
#include "DynamicObject.h"

class BombDecorator : public DynamicObject
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