#include "RectangleGenerator.h"
//RectangleGenerator(Klasa genreująca losowy prostokąt o boku z podanego przedziału),


RectangleGenerator::RectangleGenerator(int min, int max)
	:	_min(min), _max(max), 
		_side(0), 
		Rectangle(_side, _side),
		engine(std::random_device ()()),
		dist(_min, _max)
{
}



double RectangleGenerator::createSide()
{
	//std::random_device rd;
	//std::mt19937 engine(rd());
	//std::uniform_int_distribution<int> dist(_min, _max);

	_side = dist(engine);

	return _side;
}

Rectangle RectangleGenerator::createRectangle()
{ 
	double side1 = createSide();
	double side2 = createSide();

	return Rectangle(side1, side2);
}
