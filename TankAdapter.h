#pragma once
#include "GameObject.h"
#include "TankAdaptee.h"
#include "DestroyableGroundObject.h"

class TankAdapter : public DestroyableGroundObject
{
private:
    TankAdaptee tank;

public:
    void SetPos(double nx, double ny) override;
    uint16_t GetWidth() const override;
    void Draw() override;
    bool __fastcall isInside(double x1, double x2) const override;
    inline uint16_t GetScore() const override;
};