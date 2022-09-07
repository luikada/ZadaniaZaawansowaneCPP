
#include <iostream>
#include "RectangleGenerator.h"
#include "RectangleManager.h"


int main()
{
	Rectangle rectangle(5.5,8.8);
	 
	RectangleGenerator genarate (3,100);
	Rectangle abc=genarate.createRectangle();
	std::cout << abc.Area() << std::endl;

	RectangleManager r(5);
	r.printRectangles();
	int RecBiggerThan= r.countRectangleBiggerThen(50);
	std::cout << RecBiggerThan << std::endl;

}
