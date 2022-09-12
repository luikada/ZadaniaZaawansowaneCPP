#include "SzyfrCezara.h"
#include <algorithm>
#include <iostream>

SzyfrCezara::SzyfrCezara(std::string text, int secretValue)
	: _text(text), _secretValue(secretValue)
{
}

int SzyfrCezara::checkSecretValue()
{
	int goodValue = 0; 
	while (_secretValue>25)
	{
		goodValue = _secretValue % 25;
	}

	if (_secretValue <= 25)
	{
		goodValue= _secretValue;
	}
	return goodValue;
}



std::string SzyfrCezara::cypher()
{
	int correctValue = checkSecretValue();
	std::string temp;

	for (char c : _text)
	{

		if (c + correctValue >= 122)
		{
			int t = 122 -c;
			correctValue -= t;
			char nletter = 96 + correctValue;

			temp.push_back(nletter);

		}
		else if (c == ' ')
		{
			temp.push_back(c);
		}
		else 
		{
			char nletter = c + correctValue;

			temp.push_back(nletter);
		}

	}
	return temp;

}
std::string SzyfrCezara::decepher()
{
	int correctValue = checkSecretValue();
	std::string temp;
	for (char c : _text)
	{
		if (c - correctValue<97)
		{ 
			int t = c-97;
			int tempVal=correctValue -t;
			char nletter = 123- tempVal;

			temp.push_back(nletter);

		}
		else if (c == ' ')
		{
			temp.push_back(c);
		}
		else
		{
			char tLetter = c - correctValue;
			temp.push_back(tLetter);
		}

	}
	return temp;
	return std::string();
}
std::string SzyfrCezara::changeToLower()
{
	std::transform(_text.begin(), _text.end(), _text.begin(), [](unsigned char c) { return std::tolower(c); });
	return _text;
}