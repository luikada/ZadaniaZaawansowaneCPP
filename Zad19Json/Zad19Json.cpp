#include <iostream>
#include <fstream>
#include "Student.h"
#include "json.hpp"

/*
    "Students":[
    {"firstName":"Sean", "lastName":"Brown"},
    {"firstName":"Drake", "lastName":"Williams"},
    {"firstName":"Tom", "lastName":"Miller"},
    {"firstName":"Peter", "lastName": "Jonson"}
    ]
*/

int main()
{
    using json = nlohmann::json;

    std::vector<Zad::Student> students;
    students.emplace_back("Sean", "Brown", 1);
    students.push_back(Zad::Student("Drake", "Williams", 2));
    students.emplace_back("Tom", "Miller", 3);
    students.emplace_back("Peter", "Jonson", 4);

    json j;

    j["Students"] = students;

    //std::cout << std::setw(4) << j;
    std::ofstream o("students.json");
    o << std::setw(4) << j << std::endl;


    //Czesc druga zadnai czyli wczytanie z pliku

    std::ifstream ifs("students.json");
    json jf = json::parse(ifs);

    std::list<Zad::Student> studentsList;

    for (auto& elem : jf["Students"])
    {
        //Zad::Student student;
        //elem.get_to(student);
        studentsList.push_back(elem.get<Zad::Student>());
    }

    std::for_each(studentsList.begin(), studentsList.end(), [](const Zad::Student& s) {
        std::cout << "Imie: " << s.getFirstName() << "; Nazwisko: " << s.getLastName() << std::endl; });

}