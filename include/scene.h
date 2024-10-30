#ifndef SCENE_H
#define SCENE_H

#include "block_handler.h"
#include "entity_handler.h"

#define LENGTH 20
#define WIDTH 10

typedef struct {
    char scene[WIDTH][LENGTH];
    char entities[1];
    char block[200];
} Scene;

Scene createScene();
void displayScene(char scene[WIDTH][LENGTH]);
void refreshScene(char scene[WIDTH][LENGTH], Block blocks[], Entity entities[], int numberOfEntities);
void initBlocks(Block blocks[]);
void initEntities(Entity entities[], int numberOfEntities, int posX, int posY);

#endif
