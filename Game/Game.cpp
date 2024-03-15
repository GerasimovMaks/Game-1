#include "game.h"
#include "player.h"
#include "bot.h"
#include "user.h"
#include <map>

using namespace ::std;

const map<string, int> Game::value_level = {
		{"6", 1}, {"7", 2}, {"8", 3},
		{"9", 4}, {"10", 5}, {"Jack", 6},
		{"Queen", 7}, {"King", 8}, {"Ace", 9}
};
Game::Game(int amount_players) {
	if(this->amount_players >1 && this->amount_players <6){
		this->deck = new GameDeck();
		this->players = vector<Player>();
		this->current_battles;
		AddPlayersToArrayPlayers();
	}
}

void Game::AddPlayersToArrayPlayers() {
	for (int i = 0; i < this->amount_players - 1; i++) {
		Bot bot = Bot();
		DistributionCards(bot);
	}
	User user = User();
	DistributionCards(user);
}
void Game::DistributionCards(Player& player) {
	for (int j = 0; j < 6; j++) {
		Card* card = this->deck->GetCard();
		player.TakeCard(card);
	}
	this->players.emplace_back(player);
}
void Game::ClearGameDeskOfCards() {

}

void Game::SetFirstAttackingPlayer() {
	Card* trump_card;
	string trump_suit = this->deck->trump_card->suit;
	for (Player player : this->players) {
		Card* card = player.GetMinTrumpCard(trump_suit);
		if (value_level.at(card->value) >
			value_level.at(trump_card->value)) {
			trump_card = card;
			this->current_fighting_player = &player;
		}
	}
}