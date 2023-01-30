#include "generator.h"

#include <stdlib.h>
#include <stdio.h>

const uint8_t BOARD_SIZE = 9;

struct board generateEmptyBoard() {
    struct board new_board;
    new_board.numbers = (uint8_t *)malloc(sizeof(uint8_t) * (BOARD_SIZE * BOARD_SIZE));
    return new_board;
}

void printBoard(struct board b) {

    // Print out the first line help
    printf("x| a b c | d e f | g h i |\n");
    printf("-+");
    for (uint8_t i = 0; i < BOARD_SIZE + (BOARD_SIZE / 4); i++) {
        if ((i+1) % 4 == 0) {
            printf("-+");
        } else {
            printf("--");
        }
    }
    printf("-+\n");

    // Print out a row
    for (uint8_t r = 0; r < BOARD_SIZE; r++) {

        // If we hit a new row, print a row of -'s
        if (r % 3 == 0 && r != 0) {

            // Print empty help
            printf("-+");

            for (uint8_t i = 0; i < BOARD_SIZE + (BOARD_SIZE / 4); i++) {
                if ((i+1) % 4 == 0) {
                    printf("-+");
                } else {
                    printf("--");
                }
            }
            printf("-+\n");
        }

        // Print out the help
        printf("%d|", (r + 1));

        // Otherwise loop over the array and print the correct numbers

        for (uint8_t c = 0; c < BOARD_SIZE; c++) {

            if (c % 3 == 0 && c != 0) printf(" |");

            printf(" %d", *(b.numbers + (r * 9) + c));
        }

        printf(" |\n");

    }
    
    // Close off the board
    printf("-+");
    for (uint8_t i = 0; i < BOARD_SIZE + (BOARD_SIZE / 4); i++) {
        if ((i+1) % 4 == 0) {
            printf("-+");
        } else {
            printf("--");
        }
    }
    printf("-+\n");

}


int writeNumber(char r, char c, int v, struct board *board) {
    // Calculate the column and row from the characters
    
    
}