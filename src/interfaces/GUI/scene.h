#ifndef SCENE_H
#define SCENE_H


#include "../../core/objects/block/block_handler.h"
#include "../../core/objects/entity/entity_handler.h"

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
