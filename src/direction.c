#include <direction.h>
#include <stdlib.h>

int* add_position(direction_t direction, const int position[], size_t size) {

    if (size != 2) {
        perror("Expected array of size 2 for position!");
        return nullptr;
    }

    int x_pos = position[0];
    int y_pos = position[1];

    int *new_position = calloc(2, sizeof(int));
    new_position[0] = 0;
    new_position[1] = 0;

    switch (direction) {
        case UP:
            new_position[1] = y_pos + 1;
            break;
        case RIGHT:
            new_position[0] = x_pos + 1;
            break;
        case DOWN:
            new_position[1] = y_pos - 1;
            break;
        case LEFT:
            new_position[0] = x_pos - 1;
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



