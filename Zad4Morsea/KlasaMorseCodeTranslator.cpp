#include "KlasaMorseCodeTranslator.h"
#include <iostream>

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

	MtoA = {
		{ ".- ", 'A',},
		{"-...", 'B'  },
		{"-.-." , 'C'},
		{"-..", 'D' },
		{".",  'E' },
		{"..-.",  'F' },
		{"--." , 'G'},
		{ "...." ,'H' },
		{"..",  'I'  },
		{".---", 'J' },
		{ "-.- ", 'K',},
		{".-..", 'L'  },
		{ "--", 'M'  },
		{"-." ,'N' },
		{ "---",'O'  },
		{ ".--." , 'P'},
		{ ".-.",'R' },
		{"...", 'S'  },
		{"-", 'T' },
		{ "..-",'U'  },
		{ ".--",'W'  },
		{"-..-", 'X' },
		{"-.--",  'Y'  },
		{ "--..",'Z'  },
	
	};

}

std::vector<std::string> KlasaMorseCodeTranslator::toMorseCode(std::string t)
{
	std::vector <std::string> newWord;

	for (int i = 0; i < t.size(); i++)
	{
		char c = t[i];
		AtoM[c];
		newWord.push_back(AtoM[c]);
		newWord.push_back(", ");
	}
	return newWord;
}

std::string KlasaMorseCodeTranslator::fromMorse(std::string t) //--- ... ---
{

	std::string newWordfromM;
	std::string newLetter;

	for (int i = 0; i < t.size(); ++i)
	{
		if ((t[i] == '.')|| (t[i]=='-'))
		{
			newLetter.push_back(t[i]);
		}
		else
		{
			char c = MtoA[newLetter];
			newWordfromM.push_back(c);
			newLetter.clear();
		}

	}
	return newWordfromM;
}
