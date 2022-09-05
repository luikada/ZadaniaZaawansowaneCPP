#include "ListOf50.h"

ListOf50::ListOf50() 
	:  _ListNums(0)
{
	std::random_device rd;
	std::mt19937 engine(rd());
	std::uniform_int_distribution<int> dist(0, 100);

	for (int i = 0; i <= 50; i++)
	{
		_ListNums.push_back(dist(engine));
	}
}

void ListOf50::Print()
{
	 std::for_each(_ListNums.begin(), _ListNums.end(), [](int i) {std::cout << i << ", "; });

}

std::list<int> ListOf50::CreateListEvenSorted()
{
	std::list<int> ListEvenSorted(0);

	for (int idx : _ListNums)
	{
		if (idx%2==0)
		{
			ListEvenSorted.push_back(idx);
		}
		
	}
	
	ListEvenSorted.sort();

	return ListEvenSorted;
}

std::list<int> ListOf50::CreateListOddSorted()
{
	std::list<int> ListOddSorted(0);

	for (int idx : _ListNums)
	{
		if (idx%2 != 0)
		{
			ListOddSorted.push_back(idx);
		}
	}

	ListOddSorted.sort();
	ListOddSorted.reverse();
	return ListOddSorted;
}

std::list<int> ListOf50::OddAndEvenUnited()
{
		auto ListOdd = CreateListOddSorted();
		auto ListEven = CreateListEvenSorted();
		std::list<int> United(0);
		for (auto s : ListOdd)
		{
			United.push_back(s);
		}
		for (auto s : ListEven)
		{
			United.push_back(s);
		}
		return United;
}
