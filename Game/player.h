#pragma once
#include <vector>
#include "card.h"
#include "action.h"
using namespace ::std;


class Player {
private:
	vector<const Card&> set_cards;
public:
	void TakeCard(const Card&);
	IAction RespondToBattle();
	IAction AttackOpponent();
};