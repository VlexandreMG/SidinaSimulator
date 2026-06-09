#include "../../dessin/Airplane.hpp"

namespace ui_dessin 
{
    Airplane::Airplane(float x,float y) 
    {
        forme.setSize(sf::Vector2f(50.f,50.f));
        forme.setFillColor(sf::Color::Blue);
        forme.setPosition(x,y);
    }

    void Airplane::dessiner(sf::RenderWindow& fenetre) 
    {
        fenetre.draw(forme);
    }
}