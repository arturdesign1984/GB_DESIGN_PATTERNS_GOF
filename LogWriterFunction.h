#pragma once
#include "LogWriterVirtual.h"
#include "VisitorVirtual.h"

class LogWriterFunction : public LogWriterVirtual
{
public:
    void accept(VisitorVirtual &v) override;
    std::string fun1(std::string &str);
};