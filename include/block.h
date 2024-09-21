#ifndef BLOCK_H
#define BLOCK_H

typedef struct {
    char symbol;
    int posX;
    int posY;

    void (*action)(enum Action);
} Block;

#endif
