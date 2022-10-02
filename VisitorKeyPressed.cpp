#include "VisitorKeyPressed.h"
#include "LogWriterKeyPressed.h"
#include "LogWriterFunction.h"
#include "LogWriterDeltaTime.h"

void VisitorKeyPressed::visit(LogWriterFunction* e)
{}

void VisitorKeyPressed::visit(LogWriterDeltaTime* e)
{}

void VisitorKeyPressed::visit(LogWriterKeyPressed* e)
{
    MyTools::WriteToLog(e->fun3(*funcName, *key));
}