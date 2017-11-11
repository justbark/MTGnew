#include "Card.h"

#include <iostream>
using std::ostream;

//default constructor
Card::Card()
{

}

//constructor
Card::Card(int d, int a, cType cT, std::string color, std::string name, std::string txt)
{
	if (cT = Land)
	{
		def = NULL;
		atk = NULL;
	}
	else
	{
		def = d;
		atk = a;
		cardType = cT;
	}
	cColor = color;
	cName = name;
	cText = txt;
}

//overloaded << operator
ostream& operator << (ostream& os, const Card& cd)
{
	//output card
	std::cout << "----------Card----------" << std::endl;
	std::cout << "Card name: " << cd.cName << std::endl;
	std::cout << "Card Type: " << cd.cardType << std::endl;
	std::cout << "Attack points: " << cd.atk << std::endl;
	std::cout << "Def points: " << cd.def << std::endl;
	std::cout << "Text: " << cd.cText << std::endl;
	std::cout << "-------End_Card---------" << std::endl;
}

//overloaded < operator
bool Card::operator< (const Card& cd) const
{
	return this->def < cd.atk;
}

//overloaded > operator
bool Card::operator> (const Card& cd) const
{
	return this->def > cd.atk;
}

//overloaded == operator
bool Card::operator== (const Card& cd) const
{
	return this->def == cd.atk;
}

//return the cards atk value
int Card::getAtk() const
{
	return atk;
}

//return the cards def value
int Card::getDef() const
{
	return def;
}

//return the cards type
cType Card::getCType() const
{
	return cardType;
}

//return the cards name
std::string Card::getCName()
{
	return cName;
}

//return the cards text
std::string Card::getCText()
{
	return cText;
}
