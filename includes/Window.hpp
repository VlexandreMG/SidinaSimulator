#ifndef WINDOW
#define WINDOW
#include <SFML/Graphics.hpp>
#include <string>
#include "../dessin/Airplane.hpp"


namespace ui_window 
{
    class Window : public sf::RenderWindow 
    {
        private: 
            std::string title;
        public:
            Window(const std::string& title, unsigned int width, unsigned int height);
            void afficher(ui_dessin::Airplane& avion);
    };
}
#endif