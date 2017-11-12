#include "Player.h"

Player::Player(std::string pName, int hitPoints, int poisonCounters)
{
	//constructor
	playerName = pName;
	playerLife = hitPoints;
	playerPoisonCounters = poisonCounters;
}
void Player::setPlayerDeck(std::string color, int numLands, int numCreatures, int numArtifacts, int numEnchants, int numPlanesWalker, int numInstants, int numSorcery)
{
	playerDeck = Deck(color, numLands, numCreatures, numArtifacts, numEnchants, numPlanesWalker, numInstants, numSorcery);
}

std::string Player::getPlayerName()
{
	return playerName;
}

int Player::getPlayerLife()
{
	return playerLife
}

int Player::getPlayerPoisoncounters()
{
	return playerPoisonCounters;
}