// zad18Json.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//Następnie wypisz sumę wynagrodzenia wraz z bonusem dla Stefana

#include <iostream>
#include "json.hpp"

int main()
{
    using json = nlohmann::json;

    std::string jasonStefan = (R"(

        {
            "company":{
                "employee":{
                    "name":"Stefan",
                        "payroll" : {
                        "salary":1500,
                            "bonus" : 800
                    }
                }
            }
        })");

    json js = json::parse(jasonStefan);

    json emplooye = js ["company"]["employee"];
    std::string eName = js["name"];
    int salary = js["payroll"]["salary"];
    int bonus = js["payroll"]["bonus"];
    int sum = salary + bonus;

    //int sum = employee["payroll"]["salary"].get<int>() + employee["payroll"]["bonus"].get<int>(); //mozmey wymusic konwersje na konkretny typ

    std::cout << "Zarobki w sumie " << eName << " to: " << sum << std::endl;
 

}

