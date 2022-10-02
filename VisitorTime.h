#pragma once
#include "VisitorVirtual.h"
#include "LogWriterFunction.h"
#include "LogWriterDeltaTime.h"
#include "LogWriterKeyPressed.h"
#include "MyTools.h"

class VisitorTime : public VisitorVirtual
{
    std::string* funcName;
    uint16_t* deltaTime;

public:
    VisitorTime(std::string* funcName, uint16_t* deltaTime) : funcName(funcName), deltaTime(deltaTime){}
    ~VisitorTime() {}
    void visit(LogWriterFunction* e) override; 
    void visit(LogWriterDeltaTime* e) override;
    void visit(LogWriterKeyPressed* e) override;
};