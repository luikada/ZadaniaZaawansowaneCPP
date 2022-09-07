#pragma once
#include <random>
#include "Rectangle.h"
#include <iostream>
//RectangleGenerator(Klasa genreująca losowy prostokąt o boku z podanego przedziału),

class RectangleGenerator :Rectangle
{private: 
	int _min, _max;
	double _side;
public:
	RectangleGenerator(int min, int max);
	double createSide();
	Rectangle createRectangle();
};
  