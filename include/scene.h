#ifndef SCENE_H
#define SCENE_H

#define LENGTH 20
#define WIDTH 10

typedef struct {
    char scene[WIDTH][LENGTH];
    char entities[1];
    char block[200];
} Scene;

Scene createScene();
void displayScene(Scene scene);
void refreshScene(char scene[WIDTH][LENGTH], char blocks, char entities);

#endif //SCENE_H
