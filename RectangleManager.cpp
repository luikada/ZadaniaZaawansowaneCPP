#include "RectangleManager.h"
	
RectangleManager::RectangleManager(int howMany)
{
	for (int i = 0; i <= howMany; i++)
	{
		RectangleGenerator rectGen(0, 10);
		rectVect.push_back(rectGen.createRectangle());
	}
}
 
void RectangleManager::printRectangles()
{
	
	std::for_each(rectVect.begin(), rectVect.end(), [&](Rectangle rect) {
		std::cout<<"d³ugosci bokow prostokata: " << rect.getSideA() << ", " << rect.getSideB() << std::endl;
		});
}

size_t RectangleManager::countRectangleBiggerThen(int area)
{
	 	//b) size_t countRectangleBiggerThen(int area) - Wypisz ile jest prostok¹tów o polu wiêkszym ni¿ 50 (count_if)
	
	size_t num = std::count_if(rectVect.begin(), rectVect.end(), [&](Rectangle rec)
	{
		if (rec.getArea() > area)
			{
				return rec.getArea();
			};
	});

	return num;
}

std::vector<Rectangle> RectangleManager::copySquares()
{//c) Przekopiuj wszystkie prostk¹ty, które s¹ kwadratami do drugiego vectora(copy_if) i go wypisz(for_each)
	std::vector<Rectangle>squares;
	std::copy_if(rectVect.begin(), rectVect.end(), std::back_inserter(squares), [&](Rectangle rec)
		{return (rec.getSideA() == rec.getSideB());});

	return squares;
}

void RectangleManager::sortAreaDescending()
{//d) void sortAreaDescending() - Posortuj vector prostok¹tów malejaco wed³ug pola powierzchni

	std::sort(rectVect.begin(), rectVect.end(), [](Rectangle first, Rectangle second) {return first.getArea()> second.getArea(); });

}

void RectangleManager::deleteInvalid()
{	//e) void deleteInvalid() Usuñ wszystkie prostok¹ty, które maj¹ przynajmniej jeden bok równy 0
	rectVect.erase(remove_if(rectVect.begin(), rectVect.end(), [](Rectangle rec) {return rec.getSideA()==0||rec.getSideB()==0; }));
}








