#include "GuessTheNumber.h"
#include <vector>
#include <numeric>

GuessTheNumber::GuessTheNumber()
	: engine(std::random_device()()),
	dist(0, 100),
	_answer(0)
{
	_secretNumber = dist(engine);

}

int GuessTheNumber::getGuess()
{
	std::cin >> _answer;
	return _answer;
}

void GuessTheNumber::print(int num)
{
	if (num == 1)
	{
		std::cout << "zgadnij liczbe z zakresu 0-100: " << std::endl;
	}
	else if (num == 2)
	{
		std::cout << "szukana liczba jest mniejsza, podaj nastepna: " << std::endl;
	}
	else if(num == 3)
	{
		std::cout << "szukana liczba jest wieksza podaj nastepna:" << std::endl;;
	}
	else if (num == 4)
	{
		std::cout << "gratulacje, zgadles! szukana liczba to: " << std::endl << _secretNumber;
	}
	else if (num == 5)
	{
		std::cout << "nieprawidlowa wartosc, sprobuj jeszcze raz " << std::endl;
	}
	else if (num ==6)
	{
		std::cout << "liczba szukana jest w odleglosci + -3" << std::endl;
	}
}



void GuessTheNumber::game()
{
	print(1);


	do 
	{
		int guess = getGuess();

		if (guess > _secretNumber)
		{
			if (checkIfInRange(guess)==0)
			{
				print(6);
			}
			else
			{
				print(2);
			};
		}
		else if (guess < _secretNumber)
		{
			if (checkIfInRange(guess)==0)
			{
				print(6);
			}
			else
			{
				print(3);
			};
		}
		else if(guess=_secretNumber)
		{
			print(4);
		}
		else
		{
			print(5);
		};
	} while (_secretNumber != _answer);

}

bool GuessTheNumber::checkIfInRange(int num)
{	
	int a = _secretNumber + 3;
	int b = _secretNumber - 3;

	if ((num<_secretNumber && num >=b) || (num > _secretNumber && num <=a))
		return 0;
	}

