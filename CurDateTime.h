#pragma once

#include <string>
#include <chrono>
#include <cstring>

class CurDateTime
{
private:
    CurDateTime(){};
    CurDateTime(const CurDateTime &ss) = delete;
    CurDateTime &operator=(const CurDateTime&) = delete;

public:
	static CurDateTime& GetInstance()
	{
		static CurDateTime theInstance;
		return theInstance;
	}
    std::string GetCurDateTime();
};