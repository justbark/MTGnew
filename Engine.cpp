#include "Engine.h"
#include "Player.h"

GameEngine::GameEngine()
{
	//make the players
	Player p1 = Player("Justin", 20, 0);
	Player p2 = Player("Joe", 20, 0);

	//make the players decks
	p1.setPlayerDeck("BLACK", 12, 12, 12, 12, 12, 12, 12);
	p2.setPlayerDeck("GREEN", 12, 12, 12, 12, 12, 12, 12);
}