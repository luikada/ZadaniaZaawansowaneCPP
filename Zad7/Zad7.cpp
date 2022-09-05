// Zad7.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
#include "ListOf50.h"
#include <iostream>

int main()
{
	ListOf50 theList;
	theList.Print();
	std::cout << std::endl;
	auto List = theList.CreateListEvenSorted();
	std::for_each(List.begin(), List.end(), [](int i) {std::cout << i << ", "; });	
	std::cout << std::endl;

	auto List2 = theList.CreateListOddSorted();
	std::for_each(List2.begin(), List2.end(), [](int x) {std::cout << x << ", "; });
		std::cout << std::endl;

	auto List3= theList.OddAndEvenUnited();
	std::for_each(List3.begin(), List3.end(), [](int x) {std::cout << x << ", "; });


}