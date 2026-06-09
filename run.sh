#!/bin/bash

# 1. Nom de l'exécutable final
OUTPUT="SidinaSimulator"

echo "=== 🔍 Recherche et Compilation de tous les fichiers .cpp ==="

# 2. Recherche dynamique de tous les fichiers .cpp dans le répertoire actuel et ses sous-dossiers
# 'find . -name "*.cpp"' va lister : main.cpp, ./ui/window/Window.cpp, ./ui/dessin/Airplane.cpp, etc.
SOURCES=$(find . -name "*.cpp")

echo "Fichiers sources détectés :"
echo "$SOURCES"
echo "------------------------------------"

# 3. Commande de compilation globale
g++ -std=c++17 $SOURCES -o $OUTPUT -lsfml-graphics -lsfml-window -lsfml-system

# 4. Exécution automatique si la compilation réussit
if [ $? -eq 0 ]; then
    echo "✅ Compilation réussie !"
    echo "🚀 Lancement de $OUTPUT..."
    echo "------------------------------------"
    ./$OUTPUT
else
    echo "❌ Échec de la compilation."
fi