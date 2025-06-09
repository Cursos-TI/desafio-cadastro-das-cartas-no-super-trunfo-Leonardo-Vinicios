#include <stdio.h>

void torre(int movimento){
    if (movimento >= 1)
    {
        torre(movimento - 1);
        printf("%d° movimento -- Torre: direita --> \n", movimento);
    }
}

void bispo(int movimento){

    if (movimento >= 1){
        bispo(movimento - 1);
        printf("%d° movimento -- Bispo: cima, ", movimento);
        if (movimento >= 1){
            printf("direita -->\n");
        }
        
    }
}

void rainha(int movimento){
   
    if (movimento >= 1){ 
        rainha(movimento - 1);
        printf("%d° movimento -- Rainha: esquerda <--\n", movimento);
    }
    
}

void cavalo(int i){
    for (i = 1; i <= 2; i++)
        printf("%d° movimento -- Cavalo: Cima \n", i);
        for (int j = 3; j < 4 ; j++){
            printf("%d° movimento -- Cavalo: Direita --> \n", j);            
        }
}

int main () {
    
    int itorre = 5, ibispo = 5, irainha = 8, icavalo = 1;
    
    // Torre
    printf("-- Bem-Vindo ao Xadrez abstrato --\n");
    
    printf("Torre\n");
    printf("Mover 5 casas para direita.\n");
    torre(itorre);
   
    //Bispo
    printf("\nBispo\n");
    printf("Mover 5 casas na diagonal.\n");
    bispo(ibispo);

    
    //Rainha
    printf("\nRainha\n");
    printf("Mover 8 casas para esquerda.\n");
    rainha(irainha);

    //Cavalo 
    printf("\nCavalo\n");
    printf("Mover 2 casas para cima e 1 para direita. \n");
    cavalo(icavalo);
    
    
    return 0;
}
