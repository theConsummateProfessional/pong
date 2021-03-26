#ifndef PADDLE
#define PADDLE

#include <SFML/Graphics.hpp>

class Paddle {
    private: 
        float size_x;
        float size_y;
        float x_pos;
        float y_pos;

    public:
        Paddle(float, float, float, float);

        sf::RectangleShape draw();
        void move_y(float);
};

#endif // PADDLE