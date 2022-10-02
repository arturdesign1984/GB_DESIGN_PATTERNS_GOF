#include "LogWriterFunction.h"

std::string LogWriterFunction::fun1(std::string& str)
{
    return (str + " was invoked");
}

void LogWriterFunction::accept(VisitorVirtual& v)
{
    v.visit(this);
}