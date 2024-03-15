#include <string>
#include "deck.h"
using namespace ::std;
#pragma once
string Suit[4] = {
	"Hearts",
	"Spades",
	"Diamonds",
	"Clubs"
};

class Card {
public:
	string suit;
	string value;
	Card(string suit, string value);
	Card();
};