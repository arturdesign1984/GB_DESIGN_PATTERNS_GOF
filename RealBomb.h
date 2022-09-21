#pragma once

#include "Bomb.h"

class RealBomb : public Bomb
{
public:
    RealBomb(){}
    void Draw() const override;
};