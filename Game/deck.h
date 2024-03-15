#pragma once
#include <stack>
#include <vector>
#include "card.h"
using namespace ::std;

class GameDeck {
	friend class Game;
private:
	stack<Card*> deck;
	Card* trump_card;
	void FillSetCards(vector<Card*>&);
public:
	GameDeck(); // TODO ������� � ������������ ��������� ������, 
	Card* GetCard();
	void GenerateRandomStack();
	void SetTrumpCard();
};