#pragma once
#include <string>
#include "VisitorVirtual.h"
// #include "LogWriterFunction.h"
// #include "LogWriterDeltaTime.h"
class LogWriterVirtual
{ 
public: 
    virtual void accept(class VisitorVirtual& v) = 0;
};