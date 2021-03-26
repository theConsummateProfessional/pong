#include "src/game.hpp"
const float SIZE_X = 1560;
const float SIZE_Y = 1048;

int main() {
	Game game(SIZE_X, SIZE_Y);
	game.render();

	return EXIT_SUCCESS;
}
