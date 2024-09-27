#ifndef SNAKE_C_GAME_ELEMENT_H
#define SNAKE_C_GAME_ELEMENT_H

#define APPLE_CHAR 'O'
#define SNAKE_HEAD_CHAR 'S'
#define SNAKE_BODY_CHAR 'V'
#define WALL_CHAR '#'

typedef enum {
    APPLE_ELEMENT,
    SNAKE_HEAD_ELEMENT,
    SNAKE_BODY_ELEMENT,
    WALL_ELEMENT
} element_type;

const char to_char(element_type elementType);

#endif //SNAKE_C_GAME_ELEMENT_H
