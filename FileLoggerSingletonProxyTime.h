#pragma once

#include <string>
#include <chrono>
#include <cstring>
#include "FileLoggerSingletonBase.h"
#include "FileLoggerSingletonProxy.h"

class FileLoggerSingletonProxyTime : public FileLoggerSingletonBase
{
private:
	std::string logStr;
	FileLoggerSingletonProxy* fileLogger;
	FileLoggerSingletonProxyTime(){};
    FileLoggerSingletonProxyTime(const FileLoggerSingletonProxyTime &ss) = delete;
    FileLoggerSingletonProxyTime &operator=(const FileLoggerSingletonProxyTime&) = delete;

public:
	static FileLoggerSingletonProxyTime& GetInstance()
	{
		static FileLoggerSingletonProxyTime theInstance;
		return theInstance;
	}
    std::string GetCurDateTime();
	void __fastcall OpenLogFile(const std::string &FN);
	void CloseLogFile();
	void __fastcall WriteToLog(const std::string& str);
	void __fastcall WriteToLog(const std::string& str, int n);
	void __fastcall WriteToLog(const std::string& str, double d);
};