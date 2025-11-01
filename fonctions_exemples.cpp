#include "fonctions_exemples.h"

void dessiner_ligne(int longueur, int y, char chr) {
    for (int x = 0; x < longueur; x++) {
        ecrire_char(x, y, chr);
    }
}

void alterner_lignes() {
    for (int y = 0; y < CONSOLE_Y_SIZE; y++) {
        if (y % 2 == 0) {
            changer_couleur(Couleur::ROUGE, Plan::ARRIERE);
        } 
        
        else {
            changer_couleur(Couleur::JAUNE, Plan::AVANT);
        }

        dessiner_ligne(CONSOLE_X_SIZE, y, '#');
    }
}