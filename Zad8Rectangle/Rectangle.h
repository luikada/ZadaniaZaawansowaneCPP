//// Zadanie 8 -to
//Klasy: Rectangle(przechowuje d�ugo�ci bok�w, wylicza pole, isSquare()), RectangleGenerator(Klasa genreuj�ca losowy prostok�t o boku z podanego przedzia�u), 
// RectangleManger(tutaj faktycznie implementujemy zadania)
//Utw�rz wektor 100 prostok�t�w o losowych d�ugo�ciach bok�w z przedzia�u 0, 10 (u�yj liczb ca�kowitych)
//a) void printRectangles() - Wypisz wszystkie prostok�ty(for_each + unary function)
//b) size_t countRectangleBiggerThen(int area) - Wypisz ile jest prostok�t�w o polu wi�kszym ni� 50 (count_if)
//c) std::vector copyRectangles() - Przekopiuj wszystkie prostk�ty, kt�re s� kwadratami do drugiego vectora(copy_if) i go wypisz(for_each)
//d) void sortAreaDescending() - Posortuj vector prostok�t�w malejaco wed�ug pola powierzchni
//e) void deleteInvalid() Usu� wszystkie prostok�ty, kt�re maj� przynajmniej jeden bok r�wny 0

class Rectangle {

private: 
	double _sideA;
	double _sideB;
public:
	Rectangle(double a, double b);
	double Area(); 
	double Circuit();
	bool isSquare();
};

