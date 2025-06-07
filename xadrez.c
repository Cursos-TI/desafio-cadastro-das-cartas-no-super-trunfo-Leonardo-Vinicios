#include <stdio.h>

int main () {

    int itorre = 1, ibispo = 1, irainha = 1;

    // Torre
    printf("-- Bem-Vindo ao Xadrez abstrato --\n");
    printf("Torre (While)\n");
    printf("Mover 5 casas para direita\n");

    while (itorre <= 5)
    {
        printf("%d° movimento -- Torre: direita --> \n", itorre);
        itorre++;
    }
   
    //Bispo
    printf("\nBispo (Do-while)\n");
    printf("Mover 5 casas na diagonal\n");
    do {
        printf("%d° movimento -- Bispo: cima, direita -->\n", ibispo);
        ibispo++;

    } while (ibispo <= 5);
    
    //Rainha
    printf("\nRainha (For)\n");
    printf("Mover 8 casa para esquerda\n");
    for (irainha = 1; irainha <=8; irainha++){
        printf("%d° movimento -- Rainha: esquerda <--\n", irainha);
    }

    return 0;
}