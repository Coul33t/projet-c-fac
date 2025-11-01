# Projet TP Informatique (XLG1IE010)

## Instruction de compilation
### Sous UNIX
g++ main.cpp fonctions_aide.cpp fonctions_exemples.cpp -Wall -Wextra -lcurses -o main.exe

### Sous Windows
g++ main.cpp fonctions_aide.cpp fonctions_exemples.cpp -Wall -Wextra extlib\pdcruses\lib\libpdcurses.a -o main.exe