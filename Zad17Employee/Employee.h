#pragma once
#include <string>

class Employee
{ 
public: 
	//dodaj ctor i settery
	enum class Gender { women, men, unknown };

	std::string getName(std::string first_name);
	void setName(std::string first_name);
	std::string getSurname(std::string last_name);
	void setSurname(std::string last_name);
	std::string getEmail(std::string email);
	void setEmail(std::string email);
	std::string getLogin(std::string login);
	void setLogin(std::string login);
	std::string getPassword(std::string password);
	void setPassword(std::string password);
	double getSalary(double salary);
	void setSalary(double salary);
	
private:
	Gender gender;
	std::string _first_name, _last_name, _email, _login, _password;
	double _salary;

};

