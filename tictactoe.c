#include <stdio.h>

char board[3][3] = {{'1', '2', '3'}, // Matrix 1. Reihe
                     {'4', '5', '6'}, // Matrix 2. Reihe
                     {'7', '8', '9'}}; //Matrix 3. Reihe
char player1 = 'X'; // Spieler X
char player2 = 'O'; // Spieler O

void printboard() {
    
    printf("TICTACTOE: \n\n");


    printf("| %c | %c | %c |\n", board[0][0], board[0][1], board[0][2]);
    printf(" -- -- -- -- \n");
    printf("| %c | %c | %c |\n", board[1][0], board[1][1], board[1][2]);
    printf(" -- -- -- -- \n");
    printf("| %c | %c | %c |\n", board[2][0], board[2][1], board[2][2]);


}

void test_if_win(){

}

void test_if_draw(){

}

void player1_move(){

}

void player2_move(){

}

void comp_move(){

}

int main(){
    printboard(); // Original-Board wird ausgegeben

}