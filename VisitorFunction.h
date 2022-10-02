#pragma once
#include "VisitorVirtual.h"
#include "LogWriterFunction.h"
#include "LogWriterDeltaTime.h"
#include "MyTools.h"
#include "LogWriterKeyPressed.h"

class VisitorFunction : public VisitorVirtual
{
    std::string* funcName;

public:
    VisitorFunction(std::string* funcName) : funcName(funcName){}
    ~VisitorFunction() {}
    void visit(LogWriterFunction* e) override; 
    void visit(LogWriterDeltaTime* e) override;
    void visit(LogWriterKeyPressed* e) override;
};