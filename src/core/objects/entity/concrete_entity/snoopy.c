#include "../../../../../include/snoopy.h"

#include <stdio.h>


void snoopyAction() {
    printf("Snoopy action !");
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