// Zad5StringCensor.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <algorithm>
#include "Censor.h"
int main()
{
    std::string word = "Word";
    char c = 'o';

    Censor cen;

    std::cout << cen.getCensoredLetter(c);
    std::cout << cen.censor(word);

}
