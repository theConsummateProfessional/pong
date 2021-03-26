#ifndef GAME
#define GAME

#include <SFML/Graphics.hpp>
#include <iostream>

#include "paddle.hpp"

class Game {
    private:
        float size_x;
        float size_y;
    
    public:
        Game(float, float);

        void render(); 
};
#endif // GAME