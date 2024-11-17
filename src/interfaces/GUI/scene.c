#include "scene.h"

#include <stdio.h>
#include <stdlib.h>


char getElementInThis();

Scene createScene(int numberOfEntities) {
    Scene scene;

    initBlocks(scene.blocks);
    initEntities(scene.entities, numberOfEntities, 4, 4);

    refreshScene(&scene, numberOfEntities);

    return scene;
}

void refreshScene(Scene *scene,const int numberOfEntities) {
    for (int iBlock = 0; iBlock < (WIDTH * LENGTH); iBlock++) {
        Block block = scene->blocks[iBlock];
        scene->scene[block.posY][block.posX] = block.symbol;
    }

    for (int iEntity = 0; iEntity < numberOfEntities; iEntity++) {
        Entity entity = scene->entities[iEntity];
        scene->scene[entity.posY][entity.posX] = entity.symbol;
    }
}


void displayScene(char scene[WIDTH][LENGTH]) {
    system("cls");
    char borderCharacter = 0xB1;

    for (int i = 0; i < (LENGTH + 4); i++) {
        printf("%c", borderCharacter);
    }
    printf("\n");

    for (int y = 0; y < WIDTH; y++) {
        printf("%c", borderCharacter);
        printf("%c", borderCharacter);

        for (int x = 0; x < LENGTH; x++) {
            printf("%c", scene[y][x]);
        }

        printf("%c", borderCharacter);
        printf("%c", borderCharacter);
        printf("\n");
    }

    for (int i = 0; i < (LENGTH + 4); i++) {
        printf("%c", borderCharacter);
    }
    printf("\n");
}

void initBlocks(Block blocks[]) {
    for (int y = 0; y < WIDTH; y++) {
        for (int x = 0; x < LENGTH; x++) {
            if (y % 2 == 0) {
                blocks[x + y * LENGTH] = getBlockWithID(1, x, y);
            } else {
                blocks[x + y * LENGTH] = getBlockWithID(0, x, y);
            }
        }
    }
}

void initEntities(Entity entities[], const int numberOfEntities, const int posX, const int posY) {
    for (int i = 0; i < numberOfEntities; i++) {
        entities[i] = getEntityWithID(0, posX, posY);
    }
}

