#ifndef AIRPLANE_HPP
#define AIRPLANE_HPP
#include <SFML/Graphics.hpp>

namespace ui_dessin 
{
    class Airplane 
    {
        private:
        sf::RectangleShape forme;

        public:
            Airplane (float x, float y);
            void dessiner(sf::RenderWindow& fenetre);
    };
}

#endif