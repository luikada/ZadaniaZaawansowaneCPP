#include "Censor.h"


char Censor::getCensoredLetter(char c)
{
	return c;
}

void Censor::setCensoredLetter(char c)
{
	_c=c;
}

std::string Censor::censor(std::string SforChange)
{
	std::string temp;

	std::for_each(SforChange.begin(), SforChange.end(), [&](int i)
		{
			if (SforChange[i] == _c)
			{
				temp[i] = '*';
			}
			else
			{
				temp[i] = SforChange[i];
			}
		});

	return temp;
}
