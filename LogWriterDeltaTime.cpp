#include "LogWriterDeltaTime.h"

std::string LogWriterDeltaTime::fun2(std::string &str, double deltaTime)
{
    return (str + " deltaTime = " + std::to_string((int)deltaTime));
}

void LogWriterDeltaTime::accept(VisitorVirtual& v)
{
    v.visit(this);
}