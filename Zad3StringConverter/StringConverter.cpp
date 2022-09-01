#include "StringConverter.h"
#include <algorithm>
#include <cctype>
#include <iostream>
//camelCase : snake_case
//helloSDA : hello_s_d_a

std::string StringConverter::toCamelCase(std::string& sSnake) //hello_s_d_a
{
	char f = '_';
	int i = 0;


	for (i; i < sSnake.size(); ++i)
	{
		if (sSnake[i] == f)
		{
			++i;
			sSnake[i] = toupper(sSnake[i]);
		}
	}
 spaceRemover(sSnake);

    return sSnake;
}

std::string StringConverter::toSnakeCase(std::string& sCamel)
{
	int i = 0;
	char f = '_';
	std::string theSnake;
	for (i; i < sCamel.size(); i++)
	{
		if (sCamel[i] >= 65 && sCamel[i] <= 90)
		{
			theSnake.push_back(f);
			theSnake.push_back(sCamel[i]);
		}
		else
		{
			theSnake.push_back(sCamel[i]);
		}
	}
	toLowerCase(theSnake);
	return theSnake;

}

std::string StringConverter::spaceRemover(std::string& sSnake)
{
	{
		sSnake.erase(std::remove(sSnake.begin(), sSnake.end(), '_'), sSnake.end());
		return sSnake;
	}
}

std::string StringConverter::BigLetterRemover(std::string& sCamel)
{
	char c=0;
	if (sCamel[c] >= 65 && sCamel[c] <= 90)
	{
		sCamel.erase(c);
	}

	return sCamel;

}
std::string StringConverter::toLowerCase(std::string& s)
{
	 std::transform(s.begin(), s.end(), s.begin(),[](unsigned char c) { return std::tolower(c); });
	 return s;
}
