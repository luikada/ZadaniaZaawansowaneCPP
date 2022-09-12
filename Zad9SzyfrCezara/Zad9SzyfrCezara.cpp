// Zad9SzyfrCezara.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "SzyfrCezara.h"
#include <algorithm>

int main()
{
	int secretValue = 5; 	
	std::string text = "zakaz";

	SzyfrCezara szyfr(text, secretValue);
	std::cout<< szyfr.cypher()<<std::endl;

	int secretValue2 = 5;
	std::string text2 = "efpfe";

	SzyfrCezara szyfr2(text2, secretValue2);
	std::cout<< szyfr2.decepher();

}
