#include "../../../../include/block_handler.h"

#include <stdio.h>
#include <stdlib.h>

Block getBlockWithID(const int id, const int posX, const int posY){
    switch(id) {
        case 0:
            return createAirBlock(posX, posY);
            break;
        case 1:
            return createNeutralBlock(posX, posY);
        break;
        default:
            printf("Aucun block n'est assigné à l'id: %c", id);
            exit( EXIT_FAILURE );
    }
}
