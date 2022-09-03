#include "CensorOfString.h"

std::vector<char> CensorOfString::addCensoredLetter(std::string sCen)
{
    for (char c : sCen)
    {
        vec.push_back(c);
    }

    return vec;
}

std::string CensorOfString::censor(std::string SforChange)
{
	std::string temp;

	std::for_each(SforChange.begin(), SforChange.end(), [&](char ch)
		{ 
			int i = 0;
				if (ch == vec[i])
				{
					ch = '*';
					temp.push_back(ch);
				}
				else
				{
					temp.push_back(ch);
				}
				i ++ ;
		});
	return temp;
}
