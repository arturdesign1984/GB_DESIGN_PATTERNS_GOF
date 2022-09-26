#include "TankAdapter.h"

inline void TankAdapter::SetPos(double nx, double ny)
{  
    tank.SetPos(nx, ny);
}

inline uint16_t TankAdapter::GetWidth() const
{  
    return tank.GetWidth();
}

void TankAdapter::Draw()
{  
    tank.Paint();
}

bool __fastcall TankAdapter::isInside(double x1, double x2) const
{
    return tank.isInRange(x1, x2);
}

inline uint16_t TankAdapter::GetScore() const
{
    return tank.GetScore();
}