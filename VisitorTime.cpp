#include "VisitorTime.h"

void VisitorTime::visit(LogWriterFunction* e)
{}

void VisitorTime::visit(LogWriterDeltaTime* e)
{
    MyTools::WriteToLog(e->fun2(*funcName, *deltaTime));
}

void VisitorTime::visit(LogWriterKeyPressed* e)
{}