#include <stdio.h>

#define LINHA 11
#define COLUNA 11

int main (){

    int soma = 0;
    int tabuleiro[LINHA][COLUNA];

    //Numeração da lateral esquerda do tabuleiro
    for (int linha = 0; linha < 11; linha++){
            tabuleiro[linha][0] = soma ;
            // printf("Tabuleiro[%d][%d]\n",linha, 0);
            // printf("\n");
            // printf("\n");
            // printf("\n");
            soma++;
        }
    


    // Criando tabuleiro
    for (int linha = 0; linha < 11; linha++){
        for (int coluna = 1; coluna < 11; coluna++){
            tabuleiro[linha][coluna] = 0;
        }
    }
    
    //Adicionando navio horizontal
    for (int linha = 1; linha <= 1; linha++){
        for (int coluna = 1; coluna <= 3; coluna++){
            if (tabuleiro[linha][coluna] == 3)
            {
                printf("colunaá existe um navio aqui.");
            } else
                {
                    tabuleiro[linha][coluna] = 3;    
                }
        }
    }

    //Adicionando navio vertical
    for (int linha = 6; linha <= 8; linha++){
        for (int coluna = 8; coluna <= 8; coluna++){
            if (tabuleiro[linha][coluna] == 3)
            {
                printf("colunaá existe um navio aqui.");
            } else
                {
                    tabuleiro[linha][coluna] = 3;    
                } 
        }
    }

    // 1° Navio diagonal 
    for (int linha = 0; linha <= 2; linha++){
        tabuleiro[linha][linha + 6 ] = 3;    

    }

    // 2° Navio diagonal 
    for (int linha = 9; linha >= 7; linha--){
        tabuleiro[linha][linha - 5 ] = 3;    

    }

    // Ataque em cone 
    for (int linha = 0; linha < 11; linha++){
        for (int coluna = 1; coluna < 11; coluna++){
            if (linha == 1 && coluna == 4){
                tabuleiro[linha][coluna] = 5 ;
            }
            if (linha == 2 && coluna == 4){
                tabuleiro[linha][coluna] = 5 ;
            }
            if (linha == 2 && coluna == 3){
                tabuleiro[linha][coluna] = 5 ;
            }
            if (linha == 2 && coluna == 5){
                tabuleiro[linha][coluna] = 5 ;
            }
            if (linha == 3 && coluna == 2){
                tabuleiro[linha][coluna] = 5 ;
            }
            if (linha == 3 && coluna == 3){
                tabuleiro[linha][coluna] = 5 ;
            }
            if (linha == 3 && coluna == 4){
                tabuleiro[linha][coluna] = 5 ;
            }
            if (linha == 3 && coluna == 5){
                tabuleiro[linha][coluna] = 5 ;
            }
            if (linha == 3 && coluna == 6){
                tabuleiro[linha][coluna] = 5 ;
            }
            
            // tabuleiro[linha][coluna] = (linha == 2 && coluna == 5) ? 5 : 0;
        }
    }
    // Ataque em cruz
    for (int linha = 0; linha < 11; linha++){
        for (int coluna = 1; coluna < 11; coluna++){
            if (linha == 5 && coluna == 5){
                tabuleiro[linha][coluna] = 5 ;
            }
            if (linha == 6 && coluna == 5){
                tabuleiro[linha][coluna] = 5 ;
            }
            if (linha == 6 && coluna == 3){
                tabuleiro[linha][coluna] = 5 ;
            }
            if (linha == 6 && coluna == 4){
                tabuleiro[linha][coluna] = 5 ;
            }
            if (linha == 6 && coluna == 6){
                tabuleiro[linha][coluna] = 5 ;
            }
            if (linha == 6 && coluna == 7){
                tabuleiro[linha][coluna] = 5 ;
            }
            if (linha == 7 && coluna == 5){
                tabuleiro[linha][coluna] = 5 ;
            }
        }
    }




    //Ataque em octaedro
    for (int linha = 0; linha < 11; linha++){
        for (int coluna = 1; coluna < 11; coluna++){
            if (linha == 0 && coluna == 9){
                tabuleiro[linha][coluna] = 5 ;
            }
            if (linha == 1 && coluna == 9){
                tabuleiro[linha][coluna] = 5 ;
            }
            if (linha == 1 && coluna == 8){
                tabuleiro[linha][coluna] = 5 ;
            }
            if (linha == 1 && coluna == 10){
                tabuleiro[linha][coluna] = 5 ;
            }
            if (linha == 2 && coluna == 9){
                tabuleiro[linha][coluna] = 5 ;
            }

    }
}

    


    


    printf("     TABULEIRO BATALHA NAVAL \n");
    printf(" -  B  C  D  E  F  G  H  I  J  K \n");
    
    //Imprimindo tabuleiro 
    for (int linha = 0; linha < 11; linha++){
        for (int coluna = 0; coluna < 11; coluna++){
            printf(" %d ", tabuleiro[linha][coluna]);
        }
        printf("\n");
    }

    return 0 ;
}