#include "FileLoggerSingleton.h"

void __fastcall FileLoggerSingleton::OpenLogFile(const std::string &FN)
{
    logOut.open(FN, std::ios_base::out);
}

void FileLoggerSingleton::CloseLogFile()
{
    if (logOut.is_open())
    {
        logOut.close();
    }
}

void __fastcall FileLoggerSingleton::WriteToLog(const std::string &str)
{
    if (logOut.is_open())
    {
        logOut << str << std::endl;
    }
}

void __fastcall FileLoggerSingleton::WriteToLog(const std::string &str, int n)
{
    if (logOut.is_open())
    {
        logOut << str << n << std::endl;
    }
}

void __fastcall FileLoggerSingleton::WriteToLog(const std::string &str, double d)
{
    if (logOut.is_open())
    {
        logOut << str << d << std::endl;
    }
}