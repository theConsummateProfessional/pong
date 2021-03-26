#include "game.hpp"

Game::Game(float in_size_x, float in_size_y) {
    size_x = in_size_x;
    size_y = in_size_y;
}

void Game::render() {
    sf::RenderWindow window(sf::VideoMode(size_x, size_y), "PONG", sf::Style::Close | sf::Style::Resize);
    Paddle player(50.0, 150.0, 100.0, 100.0);

    while(window.isOpen()) {
        sf::Event event;
        while(window.pollEvent(event)) {
            if(event.type == event.Closed) {
                window.close();
            }
        }

        sf::Vector2i mouse_pos = sf::Mouse::getPosition(window);
        if((float)mouse_pos.y > 0 && (float)mouse_pos.y < 894)
            player.move_y((float)mouse_pos.y);
        
        sf::RectangleShape human = player.draw();

        window.clear();
        window.draw(human);
        window.display();
    }

}