#include <stdio.h>
#include <stdlib.h>

#define SIZE 3

char board[SIZE][SIZE];

void initializeBoard() {
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            board[i][j] = ' ';
        }
    }
}

void displayBoard() {
    printf("\n");
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            printf(" %c ", board[i][j]);
            if(j < SIZE - 1) printf("|");
        }
        printf("\n");
        if(i < SIZE - 1) printf("---|---|---\n");
    }
    printf("\n");
}

int checkWin() {
    for(int i = 0; i < SIZE; i++) {
        if(board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ') return 1;
    }
    for(int j = 0; j < SIZE; j++) {
        if(board[0][j] == board[1][j] && board[1][j] == board[2][j] && board[0][j] != ' ') return 1;
    }
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ') return 1;
    if(board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ') return 1;
    return 0;
}

int isDraw() {
    for(int i = 0; i < SIZE; i++) {
        for(int j = 0; j < SIZE; j++) {
            if(board[i][j] == ' ') return 0;
        }
    }
    return 1;
}

int main() {
    initializeBoard();
    int player = 1;
    char mark;
    int row, col;

    while(1) {
        displayBoard();
        player = (player % 2) ? 1 : 2;
        mark = (player == 1) ? 'X' : 'O';

        printf("Player %d (%c), enter row (1-3) and column (1-3): ", player, mark);
        
        if (scanf("%d %d", &row, &col) != 2) {
            printf("Invalid input. Please enter numbers only.\n");
            while(getchar() != '\n'); 
            continue; 
        }

        row--; 
        col--; 

        if(row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
            printf("Invalid move. Try again.\n");
            continue; 
        }

        board[row][col] = mark;

        if(checkWin()) {
            displayBoard();
            printf("Player %d wins!\n", player);
            break;
        }

        if(isDraw()) {
            displayBoard();
            printf("It's a draw!\n");
            break;
        }

        player++; 
    }
    
    return 0;
}

