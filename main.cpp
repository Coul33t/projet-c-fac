#include <iostream>
#include <string>

// Utilisé pour attendre un nombre voulu de millisecondes
#include <chrono>
#include <thread>


#include "fonctions_aide.h"
#include "fonctions_exemples.h"

void afficher_instructions() {
    ecrire_string("Appuyez sur s et d pour des lignes", 0, 0);
    ecrire_string("Appuyez sur z pour des diagonales", 0, 1);
    ecrire_string("Appuyez sur e pour afficher des caracteres aleatoires (k pour quitter)", 0, 2);
    ecrire_string("Appuyez sur a pour quitter", 0, 3);
}

int main() {
    // ----- Initialisation de la console -----
    // Si l'initialisation se passe mal, on arrête le programme (voir fonctions_aide.cpp)
    if (!initialiser_console()) {
        std::cout << "ERREUR: impossible d'initialiser la console." << std::endl;
        return 1;
    }
    // ----- Fin de l'initialisation de la console -----

    // Variable stockant le caractère tapé par l'utilisateur
    int input = ',';

    afficher_instructions();

    while (input != 'a') {
        // Attend le prochain caractère (-> touche appuyée)
        input = getch();

        // Effacer la console avant de réafficher le contenu
        effacer_console();

        if (input == 's') {
            // Affiche des lignes à lécran, alternant entre fond noir et caractère rouge,
            // et fond bleu et caractère noir (voir fonctions_exemples.cpp)
            alterner_lignes_1();
        }

        else if (input == 'd') {
            // Affiche des lignes à lécran, alternant entre fond noir et caractère rouge,
            // et fond bleu et caractère noir (voir fonctions_exemples.cpp)
            alterner_lignes_2();
        }

        else if (input == 'z') {
            // Affiche des diagonales à l'écran (voir fonctions_exemples.cpp)
            diagonales();
        }

        else if (input == 'e') {
            entree_non_bloquante();
            while(input != 'k') {
                input = getch();

                // Affiche des caractères aléatoires à l'écran (voir fonctions_exemples.cpp)
                affichage_aleatoire();
                // Attends 100ms (0.1s)
                std::this_thread::sleep_for(std::chrono::milliseconds(50));
            }

            entre_bloquante();
            effacer_console();
        }

        couleur_defaut();
        
        afficher_instructions();
    }

    // ----- Fermeture de la console -----
    fermer_console();  // (voir fonctions_aide.cpp)
    // ----- Fin de la fermeture de la console -----

    return 0;
}