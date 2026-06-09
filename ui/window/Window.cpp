#include "../../Window.hpp"

namespace ui_window 
{
    Window::Window(const std::string &title, unsigned int width, unsigned int height) : 
    sf::RenderWindow(sf::VideoMode(width, height), title, sf::Style::Titlebar | sf::Style::Close)
    {
        sf::VideoMode modeBureau = sf::VideoMode::getDesktopMode();
        int positionX = (modeBureau.width - this->getSize().x) / 2;
        int positionY = (modeBureau.height - this->getSize().y) / 2;
        this->setPosition(sf::Vector2i(positionX, positionY));

         void Window::afficher() {
        this->setFramerateLimit(60);

        while (this->isOpen()) {
            sf::Event event;
            while (this->pollEvent(event)) {
                if (event.type == sf::Event::Closed)
                    this->close();
            }

            this->clear(sf::Color::White);
            this->display();
        }
    }
}

