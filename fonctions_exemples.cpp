#include "fonctions_exemples.h"

void dessiner_ligne(int longueur, int y, char chr) {
    for (int x = 0; x < longueur; x++) {
        ecrire_char(x, y, chr);
    }
}

void alterner_lignes_1() {
    for (int y = 0; y < CONSOLE_Y_SIZE; y++) {
        if (y % 2 == 0) {
            changer_couleur(Couleur::BLEU, Plan::ARRIERE);
        } 
        
        else {
            changer_couleur(Couleur::ROUGE, Plan::AVANT);
        }

        dessiner_ligne(CONSOLE_X_SIZE, y, '#');
    }

    std::string message = "Appuyez sur s pour alterner";
    size_t taille_message = message.length();
    int x = (CONSOLE_X_SIZE / 2) - size_t(taille_message / 2);
    int y = CONSOLE_Y_SIZE / 2;
    ecrire_string(message, x, y);
}

void alterner_lignes_2() {
    for (int y = 0; y < CONSOLE_Y_SIZE; y++) {
        if (y % 2 == 0) {
            changer_couleur(Couleur::BLEU, Plan::AVANT);
        } 
        
        else {
            changer_couleur(Couleur::ROUGE, Plan::ARRIERE);
        }

        dessiner_ligne(CONSOLE_X_SIZE, y, '#');
    }

    std::string message = "Appuyez sur d pour alterner";
    size_t taille_message = message.length();
    int x = (CONSOLE_X_SIZE / 2) - size_t(taille_message / 2);
    int y = CONSOLE_Y_SIZE / 2;
    ecrire_string(message, x, y);
}

void diagonales() {
    int pas = 8;
    for (int y = 0; y < CONSOLE_Y_SIZE; y++) {
        for (int x = 0; x < CONSOLE_X_SIZE; x++) {
            if (y > 0 && (x+y) % (pas - 1) == 0) {
                changer_couleur(Couleur::JAUNE, Plan::ARRIERE);
                ecrire_char(x, y, ' ');
            }

            else if(x % pas == y % pas) {
                changer_couleur(Couleur::VERT, Plan::ARRIERE);
                ecrire_char(x, y, ' ');
            }            
        }
    }
}

void affichage_aleatoire() {
    couleur_defaut();

    for (int y = 0; y < CONSOLE_Y_SIZE; y++) {
        for (int x = 0; x < CONSOLE_X_SIZE; x++) {
            char val = rand() % (int('z') - int('A')) + int('A');
            ecrire_char(x, y, val);
        }
    }
}