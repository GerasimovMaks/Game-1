#pragma once
#include <stack>
#include "ICard.h"
using namespace ::std;

class GameDeck {
private:
	stack<Card> deck;
	void GenerateRandomStack();
public:
	GameDeck(); // TODO ������� � ������������ ��������� ������, 
	const Card& GetCard();

};