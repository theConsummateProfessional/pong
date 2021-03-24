#include <SFML/Graphics.hpp>

int main() {

	sf::RenderWindow window(sf::VideoMode(512, 512), "PONG", sf::Style::Close | sf::Style::Resize );

	while(window.isOpen()) {
		sf::Event event;
		while(window.pollEvent(event)) {
			if(event.type == event.Closed) {
				window.close();
			}
		}
	}

	return EXIT_SUCCESS;
}
