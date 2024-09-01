#include <conio.h>
#include <stdlib.h>
#include "../../include/scene.h"

int main(void) {
    char key;

    Scene scene = createScene();
    displayScene(scene);

    while (1) {
        if (kbhit()) {
            key = getch();

            system("cls");

            displayScene(scene);
        }
    }

    return 0;
}

