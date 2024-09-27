
#ifndef SNAKE_C_SNAKE_H
#define SNAKE_C_SNAKE_H

#include <direction.h>
#include <game_element.h>

typedef enum {
    NONE_COLLISION,
    APPLE_COLLISION,
    WALL_COLLISION
} collision_type_t;

typedef struct snake {
    direction_t direction;
    struct snake *next;
    struct snake *prev;
    int *pos;
} snake_t;

void add_tail(snake_t *snake);

element_type* get_snake_nodes(snake_t *snake, element_type *snake_nodes);

void update_positions(snake_t *snake);

void update_directions(snake_t *snake);

collision_type_t check_collision(snake_t* snake);

#endif //SNAKE_C_SNAKE_H
