cmake_minimum_required(VERSION 3.29)
project(snake_c C)

# Set the C standard to C23
set(CMAKE_C_STANDARD 23)

# Add the include directory
include_directories(${PROJECT_SOURCE_DIR}/include)

# Add executable and source files
add_executable(snake_c
    src/main.c
    src/direction.c
        src/snake.c
)

# Optionally, if you want to explicitly specify header files (not mandatory)
target_sources(snake_c PRIVATE
    include/snake.h
    include/direction.h
    include/game_element.h
)
