#pragma once
#include <random>
#include "Rectangle.h"
#include <iostream>
//RectangleGenerator(Klasa genreuj¹ca losowy prostok¹t o boku z podanego przedzia³u),

class RectangleGenerator :Rectangle
{private: 
	int _min, _max;
	double _side;
public:
	RectangleGenerator(int min, int max);
	double createSide();
	Rectangle createRectangle();
};
  