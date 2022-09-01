// Zad3StringConverter.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
////camelCase : snake_case
//helloSDA : hello_s_d_a

#include <iostream>
#include "StringConverter.h"
#include <algorithm>
#include <cctype>
#include <cstring>



int main()
{

	std::string a = "hello_s_d_a";
	std::string sCamel = "helloSDA";
	StringConverter obj;
	std::cout << obj.toCamelCase(a); 
	std::cout << std::endl;
	std::cout << obj.toSnakeCase(sCamel);
	std::cout << std::endl;




}

	