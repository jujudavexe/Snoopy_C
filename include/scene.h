#ifndef SCENE_H
#define SCENE_H


#include "block_handler.h"
#include "entity_handler.h"

#define LENGTH 20
#define WIDTH 10

typedef struct {
    char scene[WIDTH][LENGTH];
    Entity entities[1];
    Block blocks[200];
} Scene;

Scene createScene();
void displayScene(char scene[WIDTH][LENGTH]);
void refreshScene(Scene *scene, int numberOfEntities);
void initBlocks(Block blocks[]);
void initEntities(Entity entities[], int numberOfEntities, int posX, int posY);

#endif
