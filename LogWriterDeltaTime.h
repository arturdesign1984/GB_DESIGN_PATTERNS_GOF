#pragma once
#include "LogWriterVirtual.h"

class LogWriterDeltaTime : public LogWriterVirtual 
{
public:
    void accept(VisitorVirtual &v) override;
    std::string fun2(std::string &str, double deltaTime);
};