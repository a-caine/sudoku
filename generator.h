#ifndef GENERATOR_H
#define GENERATOR_H

#include <stdint.h>

extern const uint8_t BOARD_SIZE;

// Basic board structure
struct board {
    uint8_t *numbers;
};

struct board generateEmptyBoard();

void printBoard(struct board b);

int writeNumber(char r, char c, int v);



#endif