#include "FileLoggerSingletonProxyTime.h"

std::string FileLoggerSingletonProxyTime::GetCurDateTime()
{
    auto cur = std::chrono::system_clock::now();
    time_t time = std::chrono::system_clock::to_time_t(cur);
    char buf[64] = { 0 };
    ctime_s(buf, 64, &time);
    buf[strlen(buf) - 1] = '\0';
    return std::string(buf);
}
void __fastcall FileLoggerSingletonProxyTime::OpenLogFile(const std::string &FN)
{
    fileLogger->GetInstance().OpenLogFile(FN);
}
void FileLoggerSingletonProxyTime::CloseLogFile()
{
    fileLogger->GetInstance().CloseLogFile();
}
void __fastcall FileLoggerSingletonProxyTime::WriteToLog(const std::string& str)
{
    logStr = FileLoggerSingletonProxyTime::GetInstance().GetCurDateTime() + " - " + str;
    fileLogger->GetInstance().WriteToLog(logStr);
}
void __fastcall FileLoggerSingletonProxyTime::WriteToLog(const std::string& str, int n)
{
    logStr = FileLoggerSingletonProxyTime::GetInstance().GetCurDateTime() + " - " + str;
    fileLogger->GetInstance().WriteToLog(logStr, n);
}
void __fastcall FileLoggerSingletonProxyTime::WriteToLog(const std::string& str, double d)
{
    logStr = FileLoggerSingletonProxyTime::GetInstance().GetCurDateTime() + " - " + str;
    fileLogger->GetInstance().WriteToLog(logStr, d);
}