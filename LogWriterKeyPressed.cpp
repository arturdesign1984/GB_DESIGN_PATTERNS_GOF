#include "LogWriterKeyPressed.h"

std::string LogWriterKeyPressed::fun3(std::string &str, int key)
{
    return (std::string(__FUNCTION__) + " was invoked. key = " + std::to_string(key));
}

void LogWriterKeyPressed::accept(class VisitorVirtual& v)
{
    v.visit(this);
}