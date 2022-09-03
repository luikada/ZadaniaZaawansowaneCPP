#include "RectangleGenerator.h"

RectangleGenerator::RectangleGenerator(int min, int max) : _a(min), _b(max)
{
	std::random_device rd;
	std::default_random_engine(rd);
	std::uniform_int_distribution<int> dist(_a, _b);
}


