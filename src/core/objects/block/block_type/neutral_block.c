#include "../../../../../include/neutral_block.h"

int neutralBlockAction(enum EntityAction) {
    return 0;
}

Block createNeutralBlock(const int posX, const int posY) {
    Block block;
    block.symbol = 'N';
    block.posX = posX;
    block.posY = posY;
    block.action = neutralBlockAction;
    block.wasPushed = 0;

    return block;
}
