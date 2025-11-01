#ifndef __FONCTIONS_AIDE_H__
#define __FONCTIONS_AIDE_H__

#include <string>

#ifdef _WIN32
    #include "extlib/pdcurses/include/curses.h"
#endif

#ifdef __unix__
    #include <ncurses.h>
#endif

#include "constantes_aide.h"

enum Couleur {
    DEFAUT, ROUGE, VERT, BLEU, JAUNE
};

enum Plan {
    ARRIERE, AVANT
};

// Initialise la console de Curses
bool initialiser_console();

// Efface la console
void effacer_console();

// Ferme la console de Curses
void fermer_console();

// Fait en sorte que l'appel à getch() soit non-bloquant
void entree_non_bloquante();

// Fait en sorte que l'appel à getch() soit bloquant
void entre_bloquante();

// Ecrit un caractère chr à l'emplacement (x, y)
void ecrire_char(int x, int y, char chr);

// Bouge le curseur console à l'emplacement (x, y)
void bouger_curseur(int x, int y);

// Remet les couleurs par défaut pour les affichages (blanc sur noir)
void couleur_defaut();

// Choisi une couleur pour les affichages
void changer_couleur(Couleur couleur, Plan plan);

// Ecrit une chaine de caractère à partir de l'emplacement (x, y)
void ecrire_string(const std::string& message, int x, int y);

#endif