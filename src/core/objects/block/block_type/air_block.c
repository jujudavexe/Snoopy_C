#include "air_block.h"

int airBlockAction(enum EntityAction) {
    return 0;
}

Block createAirBlock(const int posX, const int posY) {
    Block block;
    block.symbol = ' ';
    block.posX = posX;
    block.posY = posY;
    block.action = airBlockAction;
    block.wasPushed = 0;

    return block;
}