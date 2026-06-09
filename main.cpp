#include "./includes/Window.hpp"
#include "./dessin/Airplane.hpp"
#include <SFML/Graphics.hpp>


int main() {
    ui_window::Window fenetre("SIMULATION AVION", 1366, 768);
    ui_dessin::Airplane avion(100.f,90.f);
    fenetre.afficher(avion);
    return 0;
}