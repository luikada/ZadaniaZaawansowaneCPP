#include "GuessTheNumber.h"

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
		std::cout << "szukana liczba jest wieksza podaj nastepna:";
	}
	else if (num == 4)
	{
		std::cout << "gratulacje, zgadles! szukana liczba to: " << std::endl << _secretNumber;
	}
	else if (num == 5)
	{
		std::cout << "nieprawidlowa wartosc, sprobuj jeszcze raz " << std::endl << _secretNumber;
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
			print(2);
		}
		else if (guess < _secretNumber)
		{
			print(3);
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
