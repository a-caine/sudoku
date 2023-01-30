#include "helpers.h"

int charToNum(char c) {
    // If the character lies in the range of 0-9 then we can return that value offset from '0'

    if (c >= '0' && c <= '9') {
        return c - '0';
    }

    // If the character lies in the range of a-z then we can return the value offset from 'a'
    if (c >= 'a' && c <= 'z') {
        return c - 'a';
    }

    if (c >= 'A' && c <= 'Z') {
        return c - 'A';
    }


    // Return -1 for an error
    return -1;

}

uint8_t pop(struct num_stack *stack) {
    stack->head -= 1;
    if (stack->head == 255) {
        stack->empty = 1;
    } else {
        stack->empty = 0;
    }
    return *(stack->stack + stack->head + 1);
}

void push(struct num_stack *stack, uint8_t data) {
    stack->head += 1;

    if (!stack->empty) {
        stack->empty = 1;
    }

    *(stack->stack + stack->head) = data;
}