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
    printf("| %c | %c | %c |\n\n", board[2][0], board[2][1], board[2][2]);
}

void playerx_move(){

    while (scanf("%d", 1))
        board[0][0] = player1;
        printboard();
}

void player1_move() {

    int move;

    while (1) {
        printf("Spieler 1, wähle eine Position (1-9): ");
        scanf("%d", &move);

        // Beispiel für das Setzen des Zuges:
        if (move >= 1 && move <= 9) {
            // Berechne die Zeile und Spalte basierend auf der Eingabe
            int row = (move - 1) / 3; // berechnet welche Zeile (da Int-Wert, wird nur Zahl vor kommer genommen)
            int col = (move - 1) % 3; //berechnet welche Spalte (Rest = Spalte)

            
            if (board[row][col] != 'X' && board[row][col] != 'O') {
                board[row][col] = player1;
                printboard();
                //break; // Beende die Schleife nach einem gültigen Zug
            } else {
                printf("Dieses Feld ist bereits belegt. Bitte wähle ein anderes.\n");
            }
           
        } else {
            printf("Ungültige Eingabe. Bitte wähle eine Zahl zwischen 1 und 9.\n");
        }
    }
}
void player2_move() {

    int move;

    while (1) {
        printf("Spieler 2, wähle eine Position (1-9): ");
        scanf("%d", &move);

        // Beispiel für das Setzen des Zuges:
        if (move >= 1 && move <= 9) {
            // Berechne die Zeile und Spalte basierend auf der Eingabe
            int row = (move - 1) / 3; // berechnet welche Zeile (da Int-Wert, wird nur Zahl vor kommer genommen)
            int col = (move - 1) % 3; //berechnet welche Spalte (Rest = Spalte)

            // Überprüfen, ob das Feld bereits belegt ist
            if (board[row][col] != 'X' && board[row][col] != 'O') {
                board[row][col] = player2;
                printboard();
                break; // Beende die Schleife nach einem gültigen Zug
            } else {
                printf("Dieses Feld ist bereits belegt. Bitte wähle ein anderes.\n");
            }
        }
       else {
            printf("Ungültige Eingabe. Bitte wähle eine Zahl zwischen 1 und 9.\n");
        }
    }
}

void test_if_win(){

    if (board[0][0] = 'X', board[0][1] = 'X', board[0][2] = 'X') {
        printf("Spieler 1 gewinnt!\n"); }
        

}

int main() {
    
    printboard();
    player1_move();
    //player2_move();
    //test_if_win();
}