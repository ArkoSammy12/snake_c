#include <snake.h>
#include <direction.h>

void add_tail(snake_t *snake) {

    if (snake->next == nullptr) {
        snake_t *next = calloc(1, sizeof(snake_t));
        direction_t opposite = to_opposite(snake->direction);
        int *position = calloc(2, sizeof(int));
        position[0] = snake->pos[0];
        position[1] = snake->pos[1];
        next->next = nullptr;
        next->prev = snake;
        next->pos = position;
        next->direction = opposite;
        snake->next = next;
        return;
    }
    add_tail(snake->next);
}

element_type* get_snake_nodes(snake_t *snake, element_type *snake_nodes);

void update_positions(snake_t *snake);

void update_directions(snake_t *snake);

collision_type_t check_collision(snake_t* snake);

