#include "../../../include/scene.h"

#include <stdio.h>
#include <stdlib.h>


char getElementInThis();

Scene createScene() {
    Scene scene;

    Block blocks[(WIDTH * LENGTH)];
    initBlocks(blocks);

    int numberOfEntities = 1;
    Entity entities[numberOfEntities];
    initEntities(entities, numberOfEntities, 4, 3);


    refreshScene(scene.scene, blocks, entities, numberOfEntities);

    return scene;
}

void refreshScene(char scene[WIDTH][LENGTH], Block blocks[], Entity entities[], const int numberOfEntities) {
    for (int iBlock = 0; iBlock < (WIDTH * LENGTH); iBlock++) {
        Block block = blocks[iBlock];
        scene[block.posY][block.posX] = block.symbol;
    }

    for (int iEntities = 0; iEntities < numberOfEntities; iEntities++) {
        Entity entity = entities[iEntities];
        scene[entity.posY][entity.posX] = entity.symbol;
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

