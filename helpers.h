#ifndef HELPERS_H
#define HELPERS_H

#include <stdint.h>

struct num_stack {
    uint8_t *stack;
    uint16_t head;
    _Bool empty;
};

int charToNum(char c);

uint8_t pop(struct num_stack *stack);

void push(struct num_stack *stack, uint8_t data);

#endif