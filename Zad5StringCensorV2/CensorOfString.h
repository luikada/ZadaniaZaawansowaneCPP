#pragma once
#include <vector>
#include <string>
#include <algorithm>
class CensorOfString
{
	std::vector<char> vec;
public:

	std::vector <char>addCensoredLetter(std::string sCen);
	std::string censor(std::string SforChange);
};

