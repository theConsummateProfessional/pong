#include <SFML/Graphics.hpp>

class Game {
    private:
        float size_x;
        float size_y;
    
    public:
        Game(float, float);

        void render(); 
};