#include "FileLoggerSingletonProxy.h"

void __fastcall FileLoggerSingletonProxy::OpenLogFile(const std::string &FN)
{
    fileLogger->GetInstance().OpenLogFile(FN);
}

void FileLoggerSingletonProxy::CloseLogFile()
{
    fileLogger->GetInstance().CloseLogFile();
}

void __fastcall FileLoggerSingletonProxy::WriteToLog(const std::string &str)
{

    logStr = std::to_string(++FileLoggerSingletonProxy::nomberOfCalls) + " - " + curTime->GetInstance().GetCurDateTime() + " - " + str;
    fileLogger->GetInstance().WriteToLog(logStr);
}

void __fastcall FileLoggerSingletonProxy::WriteToLog(const std::string &str, int n)
{
    logStr = std::to_string(++FileLoggerSingletonProxy::nomberOfCalls) + " - " + curTime->GetInstance().GetCurDateTime() + str;
    fileLogger->GetInstance().WriteToLog(str, n);
}

void __fastcall FileLoggerSingletonProxy::WriteToLog(const std::string &str, double d)
{
    logStr = std::to_string(++FileLoggerSingletonProxy::nomberOfCalls) + " - " + curTime->GetInstance().GetCurDateTime() + str;
    fileLogger->GetInstance().WriteToLog(str, d);
}