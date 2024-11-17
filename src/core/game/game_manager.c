#include "game_manager.h"


void launchGame() {
    char key;
    int numberOfEntities = 1;

    Scene scene = createScene(numberOfEntities);
    displayScene(scene.scene);

    do {
        key  = getLastKeyPressed();
        if(key != '\0') {
            for(int i = 0; i < numberOfEntities; i++) {
                scene.entities[i].action(key, &scene.entities[i], scene.blocks);
                refreshScene(&scene, numberOfEntities);
            }

            displayScene(scene.scene);
        }

    } while (key != '\b');
}
