#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

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
    printf("| %c | %c | %c |\n\n", board[2][0], board[2][1], board[2][2]);


}

void test_if_win(){
    // Überprüfen der Gewinnbedingungen für Spieler 1
    if ((board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') ||
        (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') ||
        (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X') ||
        (board[0][0] == 'X' && board[1][0] == 'X' && board[2][0] == 'X') ||
        (board[0][1] == 'X' && board[1][1] == 'X' && board[2][1] == 'X') ||
        (board[0][2] == 'X' && board[1][2] == 'X' && board[2][2] == 'X') ||
        (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') ||
        (board[0][2] == 'X' && board[1][1] == 'X' && board[2][0] == 'X')) {
        printf("Spieler 1 gewinnt!\n\n");
        return;
    } 
    //else {printf("Unentschieden!\n\n");}

    // Überprüfen der Gewinnbedingungen für Spieler 2
    if ((board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O') ||
        (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O') ||
        (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O') ||
        (board[0][0] == 'O' && board[1][0] == 'O' && board[2][0] == 'O') ||
        (board[0][1] == 'O' && board[1][1] == 'O' && board[2][1] == 'O') ||
        (board[0][2] == 'O' && board[1][2] == 'O' && board[2][2] == 'O') ||
        (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') ||
        (board[0][2] == 'O' && board[1][1] == 'O' && board[2][0] == 'O')) {
        printf("Spieler 2 gewinnt!\n\n");
        return;
    }
     //else {printf("Unentschieden!\n\n");}
}


void player1_move() 
{
    
    int move;

    printf("Spieler 1, wähle eine Position (1-9): \n");
    while (true)
    {
        if  (scanf("%d", &move) != 1) 
        {   
            printf("Ungültige Eingabe. Bitte wähle eine Zahl zwischen 1 und 9.\n");
             
            while (getchar() != '\n'); // Entfernt restliche Zeichen aus dem Puffer
            continue;
        }
        else
        {
            if (move >= 1 && move <= 9) 
            {
                int row = (move - 1) / 3; // berechnet welche Zeile (da Int-Wert, wird nur Zahl vor kommer genommen)
                int col = (move - 1) % 3; //berechnet welche Spalte (Rest = Spalte)

        
                if (board[row][col] != 'X' && board[row][col] != 'O') 
                {
                    board[row][col] = player1;
                    test_if_win();
                    system("cls");
                    printboard(); 
                    break; 
                } 
                else 
                {
                    printf("Dieses Feld ist bereits belegt. Bitte wähle ein anderes.\n");
                }
            } 
            else 
            {
            printf("Ungültige Eingabe. Bitte wähle eine Zahl zwischen 1 und 9.\n");
            }
        }
    }
 }

void player2_move() {

    int move;

    printf("Spieler 2, wähle eine Position (1-9): \n");
    while (true)
    {
        if  (scanf("%d", &move) != 1) 
        {   
            printf("Ungültige Eingabe. Bitte wähle eine Zahl zwischen 1 und 9.\n");
             
            while (getchar() != '\n'); // Entfernt restliche Zeichen aus dem Puffer
            continue;
        }
        else
        {
            if (move >= 1 && move <= 9) 
            {
                int row = (move - 1) / 3; // berechnet welche Zeile (da Int-Wert, wird nur Zahl vor kommer genommen)
                int col = (move - 1) % 3; //berechnet welche Spalte (Rest = Spalte)

        
                if (board[row][col] != 'X' && board[row][col] != 'O') 
                {
                    board[row][col] = player2;
                    test_if_win();
                    system("cls");
                    printboard(); 
                    break; 
                } 
                else 
                {
                    printf("Dieses Feld ist bereits belegt. Bitte wähle ein anderes.\n");
                }
            } 
            else 
            {
            printf("Ungültige Eingabe. Bitte wähle eine Zahl zwischen 1 und 9.\n");
            }
        }
    }
}

void comp_move(){

}

int main() {

    bool True = true;
    printboard();
   while (True) {
    player1_move();
    test_if_win();
    player2_move();
    test_if_win();
}
    //test_if_win();
}