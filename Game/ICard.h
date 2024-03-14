#include <string>
using namespace ::std;
#pragma once
enum Suit
{
	Hearts,
	Spades,
	Diamonds,
	Clubs
};

class Card {
	Suit Suit;
	string Value;
};