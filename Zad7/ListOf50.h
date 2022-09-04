#pragma once
#include <list>
#include <numeric>
#include <random>
#include <iostream>
class ListOf50
{

public:
	ListOf50();
	void Print();
	bool IsEven();
	std::list<int> CreateListEvenSorted();
	std::list<int> CreateListOddSorted();
	std::list<int> OddAndEvenUnited();

private:
	std::list<int> _ListNums;
}