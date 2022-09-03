#pragma once
#include <string>
#include <algorithm>
#include <iostream>
//Klasa: StringCensor
//Napisz klasê która b êdzie cenzurowaæ podane stringi(zamieniaæ wymagane litery na gwiazkê), operacje która ma wspieraæ ta klasa :

class Censor
{
	char _c;
public:
	char getCensoredLetter(char c);
	void setCensoredLetter(char c);
	//char addCensoredLetter(char& c);
	std::string censor(std::string SforChange);
};

