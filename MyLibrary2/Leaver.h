#pragma once
#include <iostream>
#ifdef MYLIBRARY2_EXPORTS
#define MYLIBRARY2 __declspec(dllexport)
#else
#define MYLIBRARY2 __declspec(dllimport)
#endif
class Leaver
{
public:
	MYLIBRARY2 std::string leave(std::string str);
};

