#include "Rectangle.h"

Rectangle::Rectangle(double a, double b) : _sideA(a), _sideB(b)
{

}
double Rectangle::getSideA()
{
	return _sideA;
}
double Rectangle::getSideB()
{
	return _sideB;
}


double Rectangle::getArea()
{
	return _sideA*_sideB;
}

double Rectangle::getCircuit()
{
	return 2*_sideA + 2*_sideB;
}

bool Rectangle::isSquare()
{
	if (_sideA != _sideB)
	{
		return 0;
	}
	else
	{
		return 1;

	};
}
