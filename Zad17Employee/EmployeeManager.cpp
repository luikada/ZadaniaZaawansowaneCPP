#include "EmployeeManager.h"


std::string EmployeeManager::passwordGenerator()
{
	std::string login;

	std::random_device rd;
	std::mt19937 engine(rd());
	std::uniform_int_distribution<char> dist(0, 127);

	for (int i = 0; i <= 7; i++)
	{
		login.push_back(dist(engine));
	}
	return login;

}

std::string EmployeeManager::loginGenerator()
{
	return std::string();
}
