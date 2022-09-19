#include "FileLoggerSingletonBase.h"
#include "FileLoggerSingleton.h"

#include <fstream>

class FileLoggerSingletonProxy : public FileLoggerSingletonBase
{
private:
    std::string logStr;
    uint32_t nomberOfCalls = 0;
    FileLoggerSingleton *fileLogger;
    FileLoggerSingletonProxy(){};
    FileLoggerSingletonProxy(const FileLoggerSingletonProxy &ss) = delete;
    FileLoggerSingletonProxy &operator=(const FileLoggerSingletonProxy&) = delete;

public:
	static FileLoggerSingletonProxy& GetInstance()
	{
		static FileLoggerSingletonProxy theInstance;
		return theInstance;
	}
	void __fastcall OpenLogFile(const std::string& FN);
	void CloseLogFile();
	void __fastcall WriteToLog(const std::string& str);
	void __fastcall WriteToLog(const std::string& str, int n);
	void __fastcall WriteToLog(const std::string& str, double d);
};
