#pragma once
class LogWriterFunction;
class LogWriterDeltaTime;
class LogWriterKeyPressed;

class VisitorVirtual
{ 
public: 
    virtual void visit(LogWriterFunction* e) =0; 
    virtual void visit(LogWriterDeltaTime* e) =0;
    virtual void visit(LogWriterKeyPressed* e) =0;
};