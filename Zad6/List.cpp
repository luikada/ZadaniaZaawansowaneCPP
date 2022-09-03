#include "List.h"

List::List(std::list<int>oneToThousend) : _oneToThousend (oneToThousend)
{
	for (int i=0; i<=1000;++i)
	{
		oneToThousend.push_back(i);
	}
	
}

std::list<int> List::createListOfFirstNumbers()
{
	for (int x : _oneToThousend)
	{
		while (checkIfDividedByMoreThen2N)
		{
			_firstNumbers.push_back(x);
		}
	}
}

std::list<int> List::createListOfCompositeNumbers()
{
	for (int a : _oneToThousend)
	{
		for(int b: _firstNumbers)
		if (a!=b)
		{
			_noFirstNumbers.push_back(a);
		}
	}
	return _noFirstNumbers;
}

bool List::checkIfDividedByMoreThen2N()
{
	for (int x : _oneToThousend)
	{
		if (x < 2)
		{
			return false;
		}
		for (int i = 2; i * i <= x; i++)
		{
			if (x % i == 0)

			return true;
		}
	}

}
