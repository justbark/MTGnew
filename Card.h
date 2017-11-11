#ifndef CARD_H
#define CARD_H


#include <string>
#include <iostream>
using std::ostream;

//enum type that represents the card type
enum cType { Land, Creature, Arifact, Enchantment, PlanesWalker, Instant, Sorcery };

class Card
{
public:
	//constructor
	Card();

	//constructor
	Card(int d, int a, cType cT, std::string name, std::string txt);

	//overload the << operator to display the card
	friend ostream& operator << (ostream& os, const Card& cd);

	//compare and return true if *this has a lesser def value than cd's atk value, false otherwise
	bool operator < (const Card& cd) const;

	//compare and return true if *this has a greater def value than cd's attack, false otherwise
	bool operator > (const Card& cd) const;

	//compare and return true if *this has a def value that is == cd's attack, false otherwise
	bool operator == (const Card& cd) const;

	//return the cards atk value
	int getAtk() const;

	//return the cards def value
	int getDef() const;

	//return the cards type
	cType getCType() const;

	//return the cards name
	std::string getCName();

	//return the cards text
	std::string getCText();

private:
	int def;	//deffence
	int atk;	//attack
	Card enchants[5];	//array holding any cards that are attatched to a card... ex: an enchant or an artifact
	cType cardType;	//type of card
	std::string cName;
	std::string cText;	//text at the bottom of each card
};
#endif // !CARD_H