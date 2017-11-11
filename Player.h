#ifndef PLAYER_H
#define PLAYER_H

#include "Deck.h"
#include <iostream>
#include <string>

class Player 
{
public:
	//constructor
	Player();

	//functions
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

