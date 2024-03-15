#pragma once
#include <vector>
#include "battle.h"
#include "deck.h"
#include "player.h"
#include <map>
using namespace ::std;



class Game {
private:
	int amount_players;
	vector<Player> players;
	Battle current_battles[6]; // массив происходящих "сражений"
	vector<Card*> cards_on_desk;
	GameDeck* deck; // колода
	Player* current_fighting_player;
	
	void AddPlayersToArrayPlayers();
	void ClearGameDeskOfCards();
	void NextGameMove();
	void DistributionCards(Player&);
	void SetFirstAttackingPlayer();
public:
	static const map<string, int> value_level;
	Game(int amount_players);
	void GameStart();
};