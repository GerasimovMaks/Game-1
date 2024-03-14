#pragma once
#include <stack>
#include "card.h"
using namespace ::std;

class GameDeck {
private:
	stack<Card> deck;
	Card trump_card;
	void GenerateRandomStack();

public:
	GameDeck(); // TODO сделать в конструкторе получение козыря, 
	const Card& GetCard();

};