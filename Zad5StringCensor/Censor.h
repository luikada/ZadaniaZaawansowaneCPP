#pragma once
#include <string>
#include <algorithm>
#include <iostream>
//Klasa: StringCensor
//Napisz klas� kt�ra b �dzie cenzurowa� podane stringi(zamienia� wymagane litery na gwiazk�), operacje kt�ra ma wspiera� ta klasa :

class Censor
{
	char _c;
public:
	char getCensoredLetter(char c);
	void setCensoredLetter(char c);
	//char addCensoredLetter(char& c);
	std::string censor(std::string SforChange);
};

