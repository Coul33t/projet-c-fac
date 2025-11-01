#ifndef __FONCTIONS_AIDE_H__
#define __FONCTIONS_AIDE_H__

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

bool initialiser_console();
void ecrire_char(int x, int y, char chr);
void bouger_curseur(int x, int y);
void effacer_console();
void fermer_console();

void changer_couleur(Couleur couleur, Plan plan);

#endif