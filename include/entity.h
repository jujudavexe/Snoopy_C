#ifndef ENTITY_H
#define ENTITY_H

enum EntityAction {
    PASS,
    PUSH,
    BREACK
};

typedef struct  {
    char symbol;
    int posX;
    int posY;
    int canInteract;

    void (*action)(); //Recevra l'action de l'entité et invoquera action de block si y'en a un sur la case actionné
} Entity;

#endif
