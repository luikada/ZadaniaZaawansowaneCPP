#include "ListOf50.h"

ListOf50::ListOf50() 
	: _ListNums(0)
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



bool ListOf50::IsEven()
{
	bool result=0;

	std::for_each(_ListNums.begin(), _ListNums.end(), [&](int i) {
		if (i % 2 == 0)
		{
			result = true;
			 
		}
		else 
		{
			result = false;
		}

	});

	return result;
		
}

std::list<int> ListOf50::CreateListEvenSorted()
{
	std::list<int> ListEvenSorted(50);

	for (int idx : _ListNums)
	{
		while (IsEven())
		{
			ListEvenSorted.push_back(idx);
		}
		
	}
	std::sort(ListEvenSorted.begin(), ListEvenSorted.end());
	

	return ListEvenSorted;
}

std::list<int> ListOf50::CreateListOddSorted()
{
	std::list<int> ListOddSorted(50);


	for (int idx : _ListNums)
	{

		while (IsEven() == false)
		{
			ListOddSorted.push_back(idx);
		}
	}
	std::sort(ListOddSorted.begin(), ListOddSorted.end());
	std::reverse(ListOddSorted.begin(), ListOddSorted.end());

	return ListOddSorted;
}

std::list<int> ListOf50::OddAndEvenUnited()
{
		auto ListOdd = CreateListOddSorted();
		auto ListEven = CreateListEvenSorted();
		std::list<int> United(50);
		for (auto s : United)
		{
			ListOdd.push_back(s);
		}
		for (auto s : United)
		{
			ListEven.push_back(s);
		}
		return United;
}
