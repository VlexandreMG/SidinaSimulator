#include "./includes/Window.hpp"

int main() {
    ui_window::Window fenetre("SIMULATION AVION", 1366, 768);
    fenetre.afficher();
    return 0;
}