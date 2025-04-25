#include <stdio.h>


int main() {

    int tabuleiro [10][11] = {
    {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

    int i;
    int j;

    int barco1 [3] = {3, 3, 3};
    int barco2 [3] = {3, 3, 3};

    printf("**  Tabuleiro  **\n\n");
    printf("      A   B   C   D   E   F   G   H   I   J\n");

    int linha1 = 3;
    int coluna1 = 4;
    int linha2 = 5;
    int coluna2 = 7;
    int linha3 = 3;
    int coluna3 = 1;
    int linha4 = 0;
    int coluna4 = 7;

    for (int b1 = 0; b1 < 3; b1++) {
        tabuleiro[linha1][coluna1 + b1] = 3;
    }

    for (int b2 = 0; b2 < 3; b2++) {
        tabuleiro[linha2 + b2][coluna2] = 3;
    }

    for (int i = 0; i < 3; i++)
    {
        tabuleiro[linha3 - i] [coluna3 + i] = 3;
    }
    
    for (int i = 0; i < 3; i++)
    {
        tabuleiro [linha4 +i] [coluna4 + i] = 3;
        }
    

    for (i = 0; i < 10; i++) {          
        for (j = 0; j < 11; j++) { 
        
                printf("  %d ", tabuleiro[i][j]);
        }
            printf("\n");                   
    }
    
    

    return 0;
}