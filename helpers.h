#ifndef HELPERS_H
#define HELPERS_H

#include <stdint.h>
#include <stdlib.h>

struct num_stack {
    uint8_t *stack;
    uint16_t head;
    _Bool empty;
};

int charToNum(char c);

uint8_t init(struct num_stack *stack);

uint8_t delete(struct num_stack *stack);

// Removes the top number from the number stack
uint8_t pop(struct num_stack *stack);

// Adds a number to the top of the number stack
void push(struct num_stack *stack, uint8_t data);

// Checks whether the num_stack contains a given number
_Bool contains(struct num_stack *stack, uint8_t data);

uint8_t randSudNum(struct num_stack *stack);

#endif