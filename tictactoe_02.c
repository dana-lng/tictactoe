#include <stdio.h>

int main() {
    char c;

    printf("Gib eine Zeile Text ein (Beenden mit Enter):\n");
    while ((c = getchar()) != '\n') { // Bis Zeilenumbruch lesen
        printf("Gelesenes Zeichen: %c\n", c);
    }

    printf("Ende der Eingabe.\n");
    return 0;
}
