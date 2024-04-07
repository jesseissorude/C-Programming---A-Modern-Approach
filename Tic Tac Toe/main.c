#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const char PLAYER = 'X';
const char COMPUTER = 'O';

char space[3][3];

void printBoard();
void createBoard();
int checkFreeSpaces();
void playerMove();
void computerMove();
char checkWinner();
void printWinner(char);

int main () {
    createBoard();
    char winner = ' ';
     
    while (winner == ' ' && checkFreeSpaces() != 0) {
        printBoard();
        
        playerMove();
        winner = checkWinner();
        if (winner != ' ' || checkFreeSpaces() == 0) {
            break;
        }

        computerMove();
        winner = checkWinner();
        if (winner != ' ' || checkFreeSpaces() == 0) {
            break;
        }
    }

    printBoard();
    printWinner(winner);

    return 0;
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
    // check rows
    for (int i = 0; i<3; i++) {
        if ((space[i][0] == space[i][1]) && (space[i][1] == space[i][2])) {
            return space[i][0];
        }
    }

    // check cols
    for (int i = 0; i<3; i++) {
        if ((space[0][i] == space[1][i]) && (space[1][i] == space[2][i])) {
            return space[0][i];
        }
    }

    // check diagonals
    if ((space[0][0] == space[1][1]) && (space[1][1] == space[2][2])) {
        return space[0][0];
    }
    if ((space[0][2] == space[1][1]) && (space[1][1] == space[2][0])) {
        return space[0][2];
    }

    return ' '; // no winner
}

void computerMove() {
    srand(time(0));
    int row;
    int col;

    if (checkFreeSpaces() > 0) {
        // pick an open space at random
        do {
            row = rand() % 3;
            col = rand() % 3;
        } while (space[row][col] != ' ');

        space[row][col] = COMPUTER; // place mark
    } else { // no spaces open, nobody won
        printWinner(' ');
    }
}

void printWinner(char winner) {
    switch (winner)
    {
    case 'X':
        printf("YOU WIN!\n");
        break;

    case 'O':
        printf("YOU LOSE!\n");
        break;
    
    case ' ':
        printf("Draw :(\n");
        break;

    default:
        printf("Something went wrong\n");
        break;
    }
}