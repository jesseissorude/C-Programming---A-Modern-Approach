#include <stdio.h>
#include <string.h>

const char PLAYER = 'X';
const char COMPUTER = 'O';

char space[3][3];

void printBoard();
void createBoard();
int checkFreeSpaces();
void playerMove();
char checkWinner();

int main () {
    createBoard();
    char winner = ' ';
     
    while (winner == ' ' && checkFreeSpaces() != 0) {
        printBoard();
        playerMove();
        winner = checkWinner();
    }
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

int checkFreeSpaces() {
    int freeSpaces = 9;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (space[i][j] != ' ') {
                freeSpaces--;
            }
        }
    }

    return freeSpaces;
}

void playerMove() {
    int row;
    int col;

    do {
        printf("Where would you like to move?\n");
        printf("Enter row [1-3]: ");
        scanf("%d", &row);
        row--;
        printf("Enter col [1-3]: ");
        scanf("%d", &col);
        col--;

        if(space[row][col] != ' ') {
            printf("Invalid move!\n");
        } else {
            space[row][col] = PLAYER;
            break;
        }
    } while (space[row][col] != ' ');
}

char checkWinner() {
    
}