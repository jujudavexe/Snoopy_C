#include "../../../include/scene.h"

#include <stdio.h>
#include <stdlib.h>


char getElementInThis();

Scene createScene() {
    Scene scene;
    Block blocks[(WIDTH * LENGTH)];
    initBlocks(blocks);
    refreshScene(scene.scene, blocks);

    return scene;
}

void refreshScene(char scene[WIDTH][LENGTH], Block blocks[]/*, Entity entities*/) {
    for (int iBlock = 0; iBlock < (WIDTH * LENGTH); iBlock++) {
        Block block = blocks[iBlock];
        scene[block.posY][block.posX] = block.symbol;
    }
    //for (int iEntities = 0; iEntities < (sizeof(block) / sizeof(block[0])); iEntities++) {
    //    Entity entity = entities[iEntities];
    //    scene[entity.posY][entity.posX] = entity.symbol;
    //}
}


void displayScene(const Scene scene) {
    system("cls");
    for (int y = 0; y < WIDTH; y++) {
        for (int x = 0; x < LENGTH; x++) {
            printf("%c", scene.scene[y][x]);
        }
         printf("\n");;
    }
}

void initBlocks(Block blocks[]) {
    for (int y = 0; y < WIDTH; y++) {
        for (int x = 0; x < LENGTH; x++) {
            if (y % 2 == 0) {
                blocks[x + y * LENGTH] = createNeutralBlock(x, y);
            } else {
                blocks[x + y * LENGTH] = createAirBlock(x, y);
            }
        }
    }
}

