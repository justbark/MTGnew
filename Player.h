#ifndef PLAYER_H
#define PLAYER_H

#include "Deck.h"
#include <iostream>
#include <string>

class Player 
{
public:
	//constructor
	Player(std::string pName, int hitPoints, int poisonCounters);

	//functions
	void setPlayerDeck(std::string color, int numLands, int numCreatures, int numArtifacts, int numEnchants, int numPlanesWalker, int numInstants, int numSorcery);
	std::string getPlayerName();
	int getPlayerLife();
	int getPlayerPoisoncounters();


private:
	std::string playerName;
	int playerLife;
	int playerPoisonCounters;
	Deck playerDeck;
};















#endif // !PLAYER_H

