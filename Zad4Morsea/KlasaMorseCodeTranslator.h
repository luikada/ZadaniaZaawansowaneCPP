#pragma once
#include <string>
#include <map>
#include <vector>
#include <algorithm>
class KlasaMorseCodeTranslator
{ public:

	KlasaMorseCodeTranslator();

	std::vector<std::string>toMorseCode(std::string t);
	std::string fromMorse(std::string t);
private:
	std::map<char, std::string> AtoM;
	std::map< std::string, char> MtoA;

};

