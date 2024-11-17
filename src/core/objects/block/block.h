#ifndef BLOCK_H
#define BLOCK_H

#include "../entity/entity.h"

typedef struct {
    char symbol;
    int posX;
    int posY;
    int wasPushed;

    void (*action)(enum EntityAction);
} Block;

#endif
