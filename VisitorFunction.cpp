#include "VisitorFunction.h"

void VisitorFunction::visit(LogWriterFunction* e)
{
    MyTools::WriteToLog(e->fun1(*funcName));
}

void VisitorFunction::visit(LogWriterDeltaTime* e)
{}

void VisitorFunction::visit(LogWriterKeyPressed* e)
{}
