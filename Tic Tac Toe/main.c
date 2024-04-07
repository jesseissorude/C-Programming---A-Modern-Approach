#include <stdio.h>
#include <string.h>

#define PI 3.14159625

char space[3][3];

void printBoard();
void createBoard();

int main () {
    createBoard();
    printBoard();
}

void printBoard() {
    printf(" %c | %c | %c \n", space[0][0], space[0][1], space[0][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", space[1][0], space[1][1], space[1][2]);
    printf("---|---|---\n");
    printf(" %c | %c | %c \n", space[2][0], space[2][1], space[2][2]);
}

void createBoard() {
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            space[i][j] = ' ';
        }
    }
}