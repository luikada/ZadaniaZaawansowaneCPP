#pragma once

#include "Employee.h"
#include "IEmployeeFileReader.h"
#include "IEmployeeFileWriter.h"
#include <string>
#include <vector>
#include <random>
#include <algorithm>
#include <memory>
class EmployeeManager
{
private: 
	std::vector <Employee> employees;
	std::shared_ptr<IEmployeeFileReader> _fileReader;
	std::shared_ptr<IEmployeeFileWriter> _fileWriter;
public:
	EmployeeManager(std::shared_ptr<IEmployeeFileReader> fileReader, std::shared_ptr<IEmployeeFileWriter> fileWriter);

	//void readDataFromFile(std::string filePath);
	std::string loginGenerator(); //a) generateLogins
	std::string passwordGenerator(); //b) generate passwords
	//b) storeLoginDataToFile
	//c) int calculateFirstNameStarting(char firstLetter)
	//c) std::map calculateUniqueNames()
	//c) calculateAvarageSalary()
	//c) calculateAvarageSalaryMen()
	//c) calculateAvarageSalaryWomen()
	//d) std::vector<E> calculateTop10Salary()
	//d) std::vector<E> calculateTop10Salary()
	//d) storeEmployeeSalary(std::vector<E>)

};

