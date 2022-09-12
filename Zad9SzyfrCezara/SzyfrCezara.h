#pragma once
#include <string>
//Szyfr Cezara - zwany szyfrem przesuwnym.
//+ std::string cypher(std::string text, int secretValue)
//+ std::string decepher(std::string text, int secretValue)

class SzyfrCezara
{
	std::string _text;
	int _secretValue;
public:
	SzyfrCezara(std::string text, int secretValue);
	int checkSecretValue();
	std::string changeToLower();
	std::string cypher();
	std::string decepher();
};
	 