#include <direction.h>
#include <position.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

position_t add_position(direction_t direction, const position_t position, size_t size) {

    int32_t x_pos = position.x;
    int32_t y_pos = position.y;

    position_t new_position = { 0, 0 };

    switch (direction) {
        case UP:
            new_position.y = y_pos + 1;
            break;
        case RIGHT:
            new_position.x = x_pos + 1;
            break;
        case DOWN:
            new_position.y = y_pos - 1;
            break;
        case LEFT:
            new_position.x = x_pos - 1;
            break;
    }
    return new_position;
}

direction_t to_opposite(direction_t direction) {
    direction_t ret = 0;
    switch (direction) {
        case UP:
            ret = DOWN;
            break;
        case RIGHT:
            ret = LEFT;
            break;
        case DOWN:
            ret = UP;
            break;
        case LEFT:
            ret = RIGHT;
            break;
    }
    return ret;
}



