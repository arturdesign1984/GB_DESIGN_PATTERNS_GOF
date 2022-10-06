#pragma once

#include <stdint.h>

#include "GameObject.h"

class DestroyableGroundObject : public GameObject
{
public:

    virtual bool __fastcall isInside(double x1, double x2) const = 0;

    virtual inline uint16_t GetScore() const = 0;
    DestroyableGroundObject *HandleInsideCheck(double x11, double x22)
    { 
        if(this->isInside(x11, x22))
        {
            return this;
        }
        return nullptr;
    }

};