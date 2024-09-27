#ifndef SNAKE_C_DIRECTION_H
#define SNAKE_C_DIRECTION_H

#include <stdlib.h>
#include "position.h"

typedef enum {
    UP,
    RIGHT,
    DOWN,
    LEFT
} direction_t;

typedef struct {
    int32_t x;
    int32_t y;
} position_t;

position_t add_position(direction_t direction, const position_t position, size_t size);

direction_t to_opposite(direction_t direction);

#endif //SNAKE_C_DIRECTION_H
