#include "neutral_block.h"

int neutralBlockAction(const enum EntityAction action) {
    return 0;
}

Block createNeutralBlock(const int posX, const int posY) {
    Block block;
    block.symbol = 0xDB;
    block.posX = posX;
    block.posY = posY;
    block.action = neutralBlockAction;
    block.wasPushed = 0;

    return block;
}
