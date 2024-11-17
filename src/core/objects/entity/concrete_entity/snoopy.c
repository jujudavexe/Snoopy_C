#include "snoopy.h"
#include "../../block/block.h"

#define LENGTH 20
#define WIDTH 10

#include <stdio.h>

void snoopyAction(const char key, Entity *entity, Block block[WIDTH][LENGTH]) {
    switch (key) {
        case 'z':
            if (entity->posY > 0 && block[entity->posY - 1][entity->posX].action(PASS) == 1)  //If Snoopy is not stuck to the top border move Snoopy up and if he can pass
                entity->posY -= 1;

        break;
        case 's':
            if (entity->posY < WIDTH - 1 && block[entity->posY + 1][entity->posX].action(PASS) == 1) //If Snoopy is not stuck to the bottom border move Snoopy down and if he can pass
                entity->posY += 1;
        break;
        case 'q':
            if (entity->posX > 0 && block[entity->posY][entity->posX - 1].action(PASS) == 1) //If Snoopy is not stuck to the left border move Snoopy to the left and if he can pass
                entity->posX -= 1;
        break;
        case 'd':
            if (entity->posX < LENGTH - 1 && block[entity->posY][entity->posX  + 1].action(PASS) == 1) //If Snoopy is not stuck to the right border move Snoopy to the right and if he can pass
                entity->posX += 1;
        break;
        case 'a':
        break;
        case 'e':
        break;
        default:
            printf("Touche non assignée.\n");
        break;
    }
}

Entity createSnoopy(const int posX, const int posY) {
    Entity snoopy;

    snoopy.symbol = 0x53;
    snoopy.canInteractWithEnvironnement = 1;
    snoopy.posX = posX;
    snoopy.posY = posY;
    snoopy.action = snoopyAction;

    return snoopy;
}