#include "entity_handler.h"

#include <stdio.h>
#include <stdlib.h>

Entity getEntityWithID(const int id, const int posX, const int posY) {
    switch(id) {
        case 0:
            return createSnoopy(posX, posY);
        default:
            printf("Aucune entité n'est assigné à l'id: %c", id);
        exit( EXIT_FAILURE );
    }
}
