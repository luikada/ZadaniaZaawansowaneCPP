// Zad4Morsea.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <map>
#include "KlasaMorseCodeTranslator.h"
#include <algorithm>

int main()
{
	std::string slowo = "SOS";
	KlasaMorseCodeTranslator MA;
	auto result = MA.toMorseCode(slowo);
	std::for_each(result.begin(), result.end(), [](const std::string c) {std::cout << c << std::endl; });


	std::string mors = "--- ... --- ";
	std::cout << mors << std::endl;

	KlasaMorseCodeTranslator MMAA;
	auto r = MMAA.fromMorse(mors);
	std::for_each(r.begin(), r.end(), [](const char c) {std::cout << c ; });

}

