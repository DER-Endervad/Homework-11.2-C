#pragma once
#include <iostream>
#ifdef MyLibrary_API_EXPORTS
#define MyLibrary_API __declspec(dllexport)
#else
#define MyLibrary_API __declspec(dllimport)
#endif
class Leaver
{
public:
	MyLibrary_API std::string leave(std::string str);
	//MyLinrary2_API std::string leave(std::string str); Выдает ошибку warning C4273: Leaver::leave: несовместимое связывание dll
};

