#include "game.hpp"

Game::Game(float in_size_x, float in_size_y) {
    size_x = in_size_x;
    size_y = in_size_y;
}

void Game::render() {
    sf::RenderWindow window(sf::VideoMode(size_x, size_y), "PONG", sf::Style::Close | sf::Style::Resize);

    while(window.isOpen()) {
        sf::Event event;
        while(window.pollEvent(event)) {
            if(event.type == event.Closed) {
                window.close();
            }
        }
    }
}