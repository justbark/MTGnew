#ifndef DECK_H
#define DECK_H

#include <iostream>
#include "Card.h"
#include <vector>
using std::ostream;

class Deck
{
public:
	//defualt constructor
	Deck();
	//constructor with specified number of card types
	Deck(std::string color, int numLands, int numCreatures, int numArtifacts, int numEnchants, int numPlanesWalker, int numInstants, int numSorcery);
	//shuffle the vector
	void shuffle();
	Card topCard();
	void removeCard(Card theCard);
	//overload << operator to display the deck
	friend ostream& operator << (ostream&, const Deck&);
private:
	std::vector<Card> theDeck;

};
#endif // !DECK_H

