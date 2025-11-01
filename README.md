# Projet TP Informatique (XLG1IE010)
Ceci est la base fournie pour le TP d'Informatique (module XLG1IE010) de L1 Informatique de Nantes Unversité. Ce dépôt est constitué :  
 * d'un fichier `fonctions_aide.h/.cpp`, contenant des fonctions à utiliser pour afficher des choses dans la console
 * d'un fichier `fonctions_exemples.h/.cpp`, contenant des examples d'utilisation de ces fonctions
 * d'un fichier `main.cpp`, appelant les fonctions d'exemple et montrant un exemple de boucle de jeu
 * d'un dossier `extlib/pdcurses/`, contenant le fichier d'en-tête `curses.h` et le fichier bibliothèque `libpdcurses.a` nécessaires à la compilation d'un programme utilisant la bibliothèque Curses sous Windows
## Instruction de compilation
### Sous UNIX
`g++ main.cpp fonctions_aide.cpp fonctions_exemples.cpp -Wall -Wextra -lcurses -o main.exe`

### Sous Windows
`g++ main.cpp fonctions_aide.cpp fonctions_exemples.cpp -Wall -Wextra extlib\pdcruses\lib\libpdcurses.a -o main.exe`