#ifndef SNAKE_C_DIRECTION_H
#define SNAKE_C_DIRECTION_H

#include <stdlib.h>

typedef enum {
    UP,
    RIGHT,
    DOWN,
    LEFT
} direction_t;

int* add_position(direction_t direction, const int position[], size_t size);

direction_t to_opposite(direction_t direction);

#endif //SNAKE_C_DIRECTION_H
