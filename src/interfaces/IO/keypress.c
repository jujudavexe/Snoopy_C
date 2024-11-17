#include "keypress.h"
#include <conio.h>

char getLastKeyPressed() {
    if (kbhit())
        return getch();
    return '\0';
}
