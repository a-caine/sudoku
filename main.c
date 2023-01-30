#include "generator.h"
#include "main.h"
#include "helpers.h"

#include <stdio.h>
#include <ctype.h>

int main() {

    printf("Hello world!\n");

    struct board gameBoard = generateEmptyBoard();

    printBoard(gameBoard);

    char input[20];

    scanf("%19s", input);

    printf("%d",validateString(input));

    if (validateString(input) == 0) {
        writeNumber(input[0], input[1], charToNum(input[2]), &gameBoard);

        printBoard(gameBoard);
    }

    return 0;
}

int validateString(char *s) {
    // Check that all the character lie in the correct range
    // Loop through each character

    char c = *s;
    int offset = 0;

    while (c != '\0') {

        char to_check = tolower(c);

        printf("%c\n", c);
        // Check that the characters lie in the correct range
        if (!((to_check > 47 && to_check < 58) || (to_check > 96 && to_check < 123))) return -1;

        c = *(s + ++offset);

    }
    return 0;
}
