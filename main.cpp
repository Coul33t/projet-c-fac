#include <iostream>
#include <string>

#include "fonctions_aide.h"
#include "fonctions_exemples.h"

int main() {
    if (!initialiser_console()) {
        std::cout << "ERREUR: impossible d'initialiser la console." << std::endl;
        return 1;
    }

    int input = ',';

    alterner_lignes();

    while (input != 'a') {
        // Attend le prochain caractère (-> touche appuyée)
        input = getch();


    }

    return 0;
}