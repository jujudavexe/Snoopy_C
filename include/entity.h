#ifndef ENTITY_H
#define ENTITY_H

typedef struct  {
    char symbol;
    int posX;
    int posY;

    void (*action)();
} Entity;

#endif
