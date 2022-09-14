#pragma once
#include <random>
#include <iostream>
#include <string>
#include <stdio.h>


class GuessTheNumber
{
private:
	int _secretNumber;
	int _answer;
	std::mt19937 engine;
	std::uniform_int_distribution<int> dist;

public:
	GuessTheNumber();
	int getGuess();
	void print (int num);
	void game();
	bool checkIfInRange(int i);
	

};

