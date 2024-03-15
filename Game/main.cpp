#include "game.h"
int main() {
	int amount_players = 4;
	Game game = Game(amount_players);
	for (int i = 0; i < amount_players; i++) {
		game.GameStart();
	}
}