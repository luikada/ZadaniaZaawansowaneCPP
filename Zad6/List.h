#pragma once
//Stwórz listê liczb od 1 do 1000. Rozdziel te liczby na dwie osobne listy : liczby pierwsze i nie liczby pierwsze.
#include <list>
class List
{
private: 
	std::list <int> _oneToThousend;
	std::list <int> _firstNumbers;
	std::list <int> _noFirstNumbers;
public: 
	List(std::list <int> oneToThousend);
	std::list<int> createListOfFirstNumbers();
	std::list<int> createListOfCompositeNumbers();
	bool checkIfDividedByMoreThen2N();
};

