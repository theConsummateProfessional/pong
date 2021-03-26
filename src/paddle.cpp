#include "paddle.hpp"

Paddle::Paddle(float in_size_x, float in_size_y, float in_x_pos, float in_y_pos) {
    size_x = in_size_x;
    size_y = in_size_y;
    x_pos = in_x_pos;
    y_pos = in_y_pos;
}

sf::RectangleShape Paddle::draw() {
    sf::RectangleShape paddle(sf::Vector2f(size_x, size_y));
    paddle.setPosition(x_pos, y_pos);
    paddle.setFillColor(sf::Color::White);
    return paddle;
}

void Paddle::move_y(float in_y) {
    y_pos = in_y;
}