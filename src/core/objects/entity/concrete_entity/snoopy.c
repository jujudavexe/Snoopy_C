#include "../../../../../include/snoopy.h"

#define LENGTH 20
#define WIDTH 10

#include <stdio.h>

void snoopyAction(char key, Entity *entity) {
    switch (key) {
        case 'z':
            if (entity->posY > 0) //Si Snoopy n'est pas collé à la bordure du haut déplace Snoopy vers le haut
                entity->posY -= 1;
        break;
        case 's':
            if (entity->posY < WIDTH - 1) //Si Snoopy n'est pas collé à la bordure du bas déplace Snoopy vers le bas
                entity->posY += 1;
        break;
        case 'q':
            if (entity->posX > 0) //Si Snoopy n'est pas collé à la bordure de gauche déplace Snoopy vers la gauche
                entity->posX -= 1;
        break;
        case 'd':
            if (entity->posX < LENGTH - 1) //Si Snoopy n'est pas collé à la bordure de droite déplace Snoopy vers la droite
                entity->posX += 1;
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