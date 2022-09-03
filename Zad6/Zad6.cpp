#include <iostream>
#include "List.h"
#include <numeric>
int main()

{
	std::list<int> s(1000);

	std::iota(s.begin(), s.end(), 0);
	

	List obj(s);
	obj.checkIfDividedByMoreThen2N();
	obj.createListOfFirstNumbers();
	obj.createListOfCompositeNumbers();
}

