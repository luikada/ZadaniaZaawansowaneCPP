#include "KlasaMorseCodeTranslator.h"

KlasaMorseCodeTranslator::KlasaMorseCodeTranslator()
{
	AtoM={ 
		{ 'A', ".- "}, 
		{ 'B' ,"-..." }, 
		{ 'C' ,"-.-." }, 
		{ 'D' ,"-.." }, 
		{ 'E' ,"." }, 
		{ 'F' ,"..-." }, 
		{ 'G' ,"--." }, 
		{ 'H' ,"...." }, 
		{ 'I' ,".." }, 
		{ 'J' ,".---" },
		{ 'K', "-.- "}, 
		{ 'L' ,".-.." }, 
		{ 'M' ,"--" }, 
		{ 'N' ,"-." }, 
		{ 'O' ,"---" }, 
		{ 'P' ,".--." }, 
		{ 'R' ,".-." }, 
		{ 'S' ,"..." }, 
		{ 'T' ,"-" }, 
		{ 'U' ,"..-" },
		{ 'W' ,".--" },
		{ 'X' ,"-..-" },
		{ 'Y' ,"-.--" },
		{ 'Z' ,"--.." },
	
	};

}

std::vector<std::string> KlasaMorseCodeTranslator::toMorseCode(std::string t)
{
	std::string wyraz;
	std::vector <std::string> newWord;

	for (int i = 0; i < wyraz.size(); i++)
	{
		char c = wyraz[i];
		AtoM[c];
		newWord.push_back(AtoM[c]);
	}
	return newWord;
}
