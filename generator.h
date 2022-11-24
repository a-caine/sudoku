#ifndef GENERATOR_H
#define GENERATOR_H

#include <stdint.h>

#define BOARD_SIZE 9;

// Basic board structure
struct board {
    uint8_t *numbers;
};

int getBoardSize();



#endif