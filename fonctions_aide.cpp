#include "fonctions_aide.h"

bool initialiser_console() {
    // Starts ncurse
    WINDOW* win = nullptr;
    win = initscr();

    // Prevent from immediately drawing on screen
    noecho();

    // Invisible cursor
    curs_set(0);

    if (has_colors()) {
        start_color();

        /* 1 */ init_pair(COULEURS_PAR_DEFAUT, COLOR_WHITE, COLOR_BLACK);

        /* 2 */ init_pair(ROUGE_PREMIER_PLAN, COLOR_RED, COLOR_BLACK);
        /* 3 */ init_pair(ROUGE_ARRIERE_PLAN, COLOR_BLACK, COLOR_RED);

        /* 4 */ init_pair(JAUNE_PREMIER_PLAN, COLOR_YELLOW, COLOR_BLACK);
        /* 5 */ init_pair(JAUNE_ARRIERE_PLAN, COLOR_BLACK, COLOR_YELLOW);

        /* 6 */ init_pair(BLEU_PREMIER_PLAN, COLOR_BLUE, COLOR_BLACK);
        /* 7 */ init_pair(BLEU_ARRIERE_PLAN, COLOR_BLACK, COLOR_BLUE);

        /* 6 */ init_pair(VERT_PREMIER_PLAN, COLOR_GREEN, COLOR_BLACK);
        /* 7 */ init_pair(VERT_ARRIERE_PLAN, COLOR_BLACK, COLOR_GREEN);
    }

    else {
        addstr("WARNING! Your console does not support colours.");
        getch();
        // TODO: print message
    }

    return (win != nullptr);
}

void effacer_console() {
    erase();
}

void fermer_console() {
    endwin();
}

void entree_non_bloquante() {
    timeout(0);
}

void entre_bloquante() {
    timeout(-1);
}

void ecrire_char(int x, int y, char chr) {
    mvaddch(y, x, chr);
}

void bouger_curseur(int x, int y) {
    move(y, x);
}

void couleur_defaut() {
    attron(COLOR_PAIR(COULEURS_PAR_DEFAUT));
}

void changer_couleur(Couleur couleur, Plan plan) {
    if (couleur == Couleur::DEFAUT) {
        attron(COLOR_PAIR(COULEURS_PAR_DEFAUT));
    }

    else if (couleur == Couleur::ROUGE) {
        if (plan == Plan::ARRIERE) {
            attron(COLOR_PAIR(ROUGE_ARRIERE_PLAN));
        } 
        
        else {
            attron(COLOR_PAIR(ROUGE_PREMIER_PLAN));
        }
    }

    else if (couleur == Couleur::VERT) {
        if (plan == Plan::ARRIERE) {
            attron(COLOR_PAIR(ROUGE_ARRIERE_PLAN));
        } 
        
        else {
            attron(COLOR_PAIR(ROUGE_PREMIER_PLAN));
        }
    }

    else if (couleur == Couleur::BLEU) {
        if (plan == Plan::ARRIERE) {
            attron(COLOR_PAIR(BLEU_ARRIERE_PLAN));
        } 
        
        else {
            attron(COLOR_PAIR(BLEU_PREMIER_PLAN));
        }
    }

    
    else if (couleur == Couleur::JAUNE) {
        if (plan == Plan::ARRIERE) {
            attron(COLOR_PAIR(JAUNE_ARRIERE_PLAN));
        } 
        
        else {
            attron(COLOR_PAIR(JAUNE_PREMIER_PLAN));
        }
    }
}

void ecrire_string(const std::string& message, int x, int y) {
    bouger_curseur(x, y);
    printw(message.c_str());
}