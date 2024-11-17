#ifndef ENTITY_H
#define ENTITY_H

struct Entity;
struct Block;

enum EntityAction {
    PASS,
    PUSH,
    BREAK
};

typedef struct  {
    char symbol;
    int posX;
    int posY;
    int canInteractWithEnvironnement;

    void (*action)(char key, struct Entity *entity, struct Block *block[]); //Recevra l'action de l'entité et invoquera action de block si y'en a un sur la case actionné
} Entity;

#endif
