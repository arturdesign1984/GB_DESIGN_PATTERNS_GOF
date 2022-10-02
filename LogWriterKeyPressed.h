#pragma once
#include "LogWriterVirtual.h"

class LogWriterKeyPressed : public LogWriterVirtual
{
public:
    void accept(class VisitorVirtual& v) override;
    std::string fun3(std::string &str, int key);
};