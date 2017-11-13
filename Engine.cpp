#include "Engine.h"
#include "Player.h"

GameEngine::GameEngine()
{

}

void GameEngine::gameStart()
{
	//make the players
	Player p1 = Player("Justin", 20, 0);
	Player p2 = Player("Joe", 20, 0);

	//make the players decks
	p1.setPlayerDeck("BLACK", 12, 12, 12, 12, 12, 12, 12);
	p2.setPlayerDeck("GREEN", 12, 12, 12, 12, 12, 12, 12);

	//decide who goes first using roll
	int p1Roll = 0;
	int p2Roll = 0;
	while (p1Roll == p2Roll)
	{
		p1Roll = p1.roll();
		p2Roll = p2.roll();
	}

	if (p1Roll > p2Roll)
	{
		//p1 goes first. This player draws 7 cards
	}
	else 
	{
		//p2 goes first. This player draws 8 cards
	}

	
}