#pragma once
#include "card.h"
#include "player.h"
using namespace ::std;

class Battle {
private:
	
public:
	Player* attacker;
	Player* defender;
	Card* attacker_card;
	Card* defending_card;
	Battle(Player*, Player*, Card*);
	Battle();
	void SetDefendingCard(Card*);
};