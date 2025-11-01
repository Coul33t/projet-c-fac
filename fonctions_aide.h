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

bool initialiser_console();
void effacer_console();
void fermer_console();
void entree_non_bloquante();
void entre_bloquante();

void ecrire_char(int x, int y, char chr);
void bouger_curseur(int x, int y);

void couleur_defaut();
void changer_couleur(Couleur couleur, Plan plan);
void ecrire_string(const std::string& message, int x, int y);

#endif