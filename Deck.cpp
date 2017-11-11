//==============================================================
// Author: Justin Barker
// Program: mtgC
// Date 11/10/2017
//==============================================================
#include <iostream>
#include "Deck.h"

using std::ostream;

//defualt constructor
Deck::Deck()
{
	//empty
}
//constructor with specified number of card types
Deck::Deck(int numLands, int numCreatures, int numArtifacts, int numEnchants, int numPlanesWalker, int numInstants, int numSorcery)
{
	//for now just have it make some dumb cards to add to the deck
	//make the lands
	int deckLands = 0;
	int deckCreatures = 0;
	int deckartifacts = 0;
	int deckEnchants = 0;
	int deckPlanesWalkers = 0;
	int deckInstants = 0;
	int deckSorcery = 0;

	while(deckLands < numLands)
	{
		deckLands++;
		Card landCard = Card(0, 0, Land, "swamp", "None");
		theDeck.push_back(landCard);
	}
	//make the creatures
	while (deckCreatures < numCreatures)
	{
		deckCreatures++;
		Card creatureCard = Card((rand() % 9) + 1, (rand() % 9) + 1, Creature, "BEAST", "MOTHA FUCKA THIS CARD ILL");
		theDeck.push_back(creatureCard);
	}
	//make the artifacts
	while (deckartifacts < numArtifacts)
	{
		deckartifacts++;
		Card artiCard = Card((rand() %4) + 1, (rand() % 4) + 1, Arifact, "stupid Arti", "need to figure out how to implement an artifact card...");
		theDeck.push_back(artiCard);
	}
	//make the enchants
	while (deckEnchants < numEnchants)
	{
		deckEnchants++;
		Card enchantCard = Card((rand() % 4) + 1, (rand() % 4) + 1, Arifact, "stupid enchant", "need to figure out how to implement an enchant card...");
		theDeck.push_back(enchantCard);
	}
	//make the planeswalkers
	while (deckPlanesWalkers < numPlanesWalker)
	{
		deckPlanesWalkers++;
	}
	//make the instants
	while (deckInstants < numInstants)
	{
		deckInstants++;
	}
	//make the sorceries
	while (deckSorcery < numSorcery)
	{
		deckSorcery++;
	}
}

//shuffle the vector
void Deck::shuffle()
{

}

ostream & operator<<(ostream& os, const Deck& currentDeck)
{
	for (SOMETHING)
	{
		os << currentDeck.theDeck[i] << " ";
	}
	return os;
}