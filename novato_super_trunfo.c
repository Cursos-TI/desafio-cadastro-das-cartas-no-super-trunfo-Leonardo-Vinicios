#include <stdio.h>

int main () {

    char carta1_estado[2] = ("");
    char carta1_codigo[4] = ("");
    char carta1_nomecidade[20] = ("");
    int carta1_populacao = 0;
    float carta1_area = 0;
    float carta1_pib = 0;
    int carta1_pontosturisticos = 0;

    char carta2_estado[3] = ("");
    char carta2_codigo[4] = ("");
    char carta2_nomecidade[20] =("");
    int carta2_populacao = 0;
    float carta2_area = 0;
    float carta2_pib = 0;
    int carta2_pontosturisticos = 0;
    
    //Declaracao de variaveis finalizada
    printf("----------------------------- \n");
    printf("Cadastro 1º carta! \n-----------------------------\n");
    
    printf("Digite o Estado (Uma letra de 'A' a 'H'): ");
    scanf(" %s", &carta1_estado);
    
    printf("Código (A letra do estado seguida de um número de 01 a 04 ): ");
    scanf(" %s", &carta1_codigo);
    
    printf("Nome da cidade: ");
    scanf(" %s", &carta1_nomecidade);
    
    printf("População da cidade: ");
    scanf(" %d", &carta1_populacao);

    printf("Área da cidade: ");
    scanf(" %f", &carta1_area);
    
    printf("Pib: ");
    scanf(" %f", &carta1_pib);
    
    printf("Pontos turisticos: ");
    scanf(" %d", &carta1_pontosturisticos);

    printf("----------------------------- \n");
    printf("Cadastro da 1º carta concluido!\n");
    printf("----------------------------- \n");

    printf("Carta 1: \n");
    printf("Estado: %s \n", carta1_estado);
    printf("Código: %s \n", carta1_codigo);
    printf("Nome da cidade: %s \n", carta1_nomecidade);
    printf("População: %d \n", carta1_populacao);
    printf("Área: %.2f km² \n", carta1_area);
    printf("PIB: %.2f bilhões de reais \n", carta1_pib);
    printf("Número de Pontos Turísticos: %d \n", carta1_pontosturisticos);

    //CADASTRO E IMPRESSÂO DA 1º carta concluido
    //Iniciando cadastro e impressao 2º carta.
    
    printf("----------------------------- \n");
    printf("Cadastro 2º carta!\n");
    printf("----------------------------- \n");
    
    
    printf("Digite o Estado (Uma letra de 'A' a 'H'): ");
    scanf(" %s", &carta2_estado);
    
    printf("Código (A letra do estado seguida de um número de 01 a 04 ): ");
    scanf(" %s", &carta2_codigo);
    
    printf("Nome da cidade: ");
    scanf(" %s", &carta2_nomecidade);
    
    printf("População da cidade: ");
    scanf(" %d", &carta2_populacao);

    printf("Área da cidade: ");
    scanf(" %f", &carta2_area);
    
    printf("Pib: ");
    scanf(" %f", &carta2_pib);
    
    printf("Pontos turisticos: ");
    scanf(" %d", &carta2_pontosturisticos);
    
    printf("----------------------------- \n");
    printf("Cadastro da 2º carta concluido!\n----------------------------- \n\n");

    printf("Carta 2: \n");
    printf("Estado: %s \n", carta2_estado);
    printf("Código: %s \n", carta2_codigo);
    printf("Nome da cidade: %s \n", carta2_nomecidade);
    printf("População: %d \n", carta2_populacao);
    printf("Área: %.2f km² \n", carta2_area);
    printf("PIB: %.2f bilhões de reais \n", carta2_pib);
    printf("Número de Pontos Turísticos: %d \n", carta2_pontosturisticos);
    printf("----------------------------- \n");

}