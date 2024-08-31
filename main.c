#include <conio.h>
#include <stdlib.h>
#include "interfaces/GUI/scene.h"

int main(void) {
    char key;

    displayScene();

    while (1) {
        if (kbhit()) {
            key = getch();

            system("cls");

            displayScene();
        }
    }

    return 0;
}

