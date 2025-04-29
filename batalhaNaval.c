#include <stdio.h>

#define LINHAS 10
#define COLUNAS 11

int main() {

    // Criação do Tabuleiro
    int tabuleiro [LINHAS][COLUNAS];
    int soma = 1;

    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            if (j == 0)
            {
               tabuleiro[i][j] = soma;
               soma++;
            }
            else{
                tabuleiro [i][j] = 0;
            }
        }
    
    }
    // Variáveis Cone
    int coluna_origem_cone = 7;
    int linha_origem_cone = 3;
    int alcance_cone = 0;

    //Comando para o cone
    for (int i = 0; i < 3; i++) {
        int linha_atual = linha_origem_cone + i;

        for (int j = coluna_origem_cone - alcance_cone; j <= coluna_origem_cone + alcance_cone; j++)
        {
                tabuleiro[linha_atual][j] = 1;
        }
        alcance_cone ++;
    }
    // Variáveis Cruz
    int coluna_cruz = 4;
    int linha_cruz = 5;
    int alcance_cruz = 0;

    //Comando para a cruz
    for (int i = 0; i < linha_cruz; i++) {
        tabuleiro[i][coluna_cruz] = 2;
    }
    for (int j = 0; j < 5; j++) {
        tabuleiro[2][2 + alcance_cruz] = 2;
        alcance_cruz ++;
    }

    // Variáveis Octaedro

    int coluna_octaedro = 1;
    int linha_octaedro = 6;
    int alcance_octaedro = 0;

    //Comando para o octaedro
        for (int i = 0; i < 3; i++)
        {
            tabuleiro [linha_octaedro + i][2] = 3;
        }
        
        for (int j = 0; j < 3   ; j++)
        {
            int linha_central = 7;
            tabuleiro [linha_central] [coluna_octaedro + j] = 3;
        }
        

// Impressão do tabuleiro
        for (int i = 0; i < LINHAS; i++)
        {
           for (int j = 0; j < COLUNAS; j++)
           {
             printf("%d ", tabuleiro[i][j]);
           }
           printf("\n");
        }
        
    

    return 0;
}