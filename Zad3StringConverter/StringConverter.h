#pragma once
#include <string>

class StringConverter
{
private:
	std::string spaceRemover(std::string& sSnake);
	std::string BigLetterRemover(std::string& sCamel);
	std::string toLowerCase(std::string& sCamel);
public: 
	std::string toCamelCase(std::string& sSnake);
	std::string toSnakeCase(std::string& sCamel);

};

