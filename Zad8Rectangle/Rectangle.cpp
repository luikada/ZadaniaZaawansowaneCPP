#include "Rectangle.h"

Rectangle::Rectangle(double a, double b) :_sideA(a), _sideB(b)
{

}

double Rectangle::Area()
{
	return _sideA*_sideB;
}

double Rectangle::Circuit()
{
	return 2*_sideA + 2*_sideB;
}

bool Rectangle::isSquare()
{
	if (_sideA == _sideB)
	{
		return true;
	}
}
