#pragma once
#include "VisitorVirtual.h"
#include "LogWriterFunction.h"
#include "LogWriterDeltaTime.h"
#include "LogWriterKeyPressed.h"
#include "MyTools.h"

class VisitorKeyPressed : public VisitorVirtual
{
    std::string* funcName;
    int* key;

public:
    VisitorKeyPressed(std::string* funcName, int* key) : funcName(funcName), key(key){}
    ~VisitorKeyPressed() {}
    void visit(LogWriterFunction* e) override; 
    void visit(LogWriterDeltaTime* e) override;
    void visit(LogWriterKeyPressed* e) override;
};