#pragma once

#include <string>
#include <fstream>
#include <chrono>
#include <cstring>
#include "FileLoggerSingletonBase.h"

class FileLoggerSingleton : public FileLoggerSingletonBase
{
private:
	std::ofstream logOut;
	FileLoggerSingleton(){};
    FileLoggerSingleton(const FileLoggerSingleton &ss) = delete;
    FileLoggerSingleton &operator=(const FileLoggerSingleton&) = delete;

public:
	static FileLoggerSingleton& GetInstance()
	{
		static FileLoggerSingleton theInstance;
		return theInstance;
	}
	std::string GetCurDateTime();
	void __fastcall OpenLogFile(const std::string& FN);
	void CloseLogFile();
	void __fastcall WriteToLog(const std::string& str);
	void __fastcall WriteToLog(const std::string& str, int n);
	void __fastcall WriteToLog(const std::string& str, double d);
};