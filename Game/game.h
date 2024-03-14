#pragma once
#include <vector>
#include "battle.h"
#include "deck.h"
using namespace ::std;

class Game {
private:
	vector<Player&> players;
	Battle* current_battles[6]; // массив происходящих "сражений"
	GameDeck deck; // колода
	const Player& current_fighting_player;
	void DistributionCards();
	void ClearGameDeskOfCards();
	void NextGameMove();
public:
	Game();
	void GameStart();
};