#include "Employee.h"

std::string Employee::getName(std::string first_name)
{
    return _first_name;
}

void Employee::setName(std::string first_name)
{
    _first_name = first_name;
}

std::string Employee::getSurname(std::string last_name)
{
    return _last_name;
}

void Employee::setSurname(std::string last_name)
{
    _last_name = last_name;

}

std::string Employee::getEmail(std::string email)
{
    return _email;
}

void Employee::setEmail(std::string email)
{
    _email = email;
}

std::string Employee::getLogin(std::string login)
{
    return login;
}

void Employee::setLogin(std::string login)
{
    _login = login;
}

std::string Employee::getPassword(std::string password)
{
    return password;
}

void Employee::setPassword(std::string password)
{
    _password = password;
}

double Employee::getSalary(double salary)
{
    return salary;
}

void Employee::setSalary(double salary)
{
    _salary = salary;
}

