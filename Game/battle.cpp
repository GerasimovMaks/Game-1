#include "battle.h"
#include "player.h"
#include "card.h"
using namespace ::std;

Battle::Battle(Player* attacker, Player* defender, Card* attacker_card) {
	this->attacker = attacker;
	this->defender = defender;
	this->attacker_card = attacker_card;
}
Battle::Battle(){}