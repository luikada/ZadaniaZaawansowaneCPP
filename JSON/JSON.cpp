// JSON.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "json.hpp"
#include <fstream>

using jason = nlohmann::json;
int main()
{
	jason j;
	j["imie"] = "Klaudia";
	j["naziwsko"] = "Tracz";
	j["lista"] = { 1,2,3 };
	j["praca"]["bank"] = "halfDay";
	j["praca"]["MotherOfaCat"] = "fullTime";

	std::ofstream o("ja.jason");
	o << std::setw(4) << j << std::endl;


}

