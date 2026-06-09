#include "window.cpp"

namespace ui_window 
{
    Window(const std::string& title, unsigned int width, unsigned int height):
    sf::RenderWindow(sf::VideoMode(width,height), title, sf::Style::Titlebar | sf::Style::Close)
    {
       sf::VideoMode modeBureau = sf::VideoMode::getDesktopMode();
        int posX = (modeBureau.with - this->getSize().x) / 2;
        int posY = (modeBureau.height - this->getSize().y) / 2;
        this->setPosition(sf::Vector2i(posX,posY));
    }   
}