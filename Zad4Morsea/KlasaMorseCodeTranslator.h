#pragma once
#include <string>
#include <map>
#include <vector>
class KlasaMorseCodeTranslator
{ public:

	KlasaMorseCodeTranslator();

	std::vector<std::string>toMorseCode(std::string t);
private:
	std::map<char, std::string> AtoM;

};

