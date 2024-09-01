#include "../../include/scene.h"
#include "../../include/keypress.h"

int main(void) {
    char key;

    Scene scene = createScene();
    displayScene(scene);

    do {
        key = getLastKeyPressed();
        if(getLastKeyPressed() != '\0') {
            displayScene(scene);
        }

    } while (1);

    return 0;
}
