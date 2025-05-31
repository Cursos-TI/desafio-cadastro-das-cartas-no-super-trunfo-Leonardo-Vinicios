#include <stdio.h>
#include <string.h>

int main () {

    //Declaração Variaveis 
    char carta1_estado[2] = ("");
    char carta1_codigo[4] = ("");
    char carta1_nomecidade[20] = ("");
    unsigned long int carta1_populacao = 0;
    float carta1_area = 0;
    float carta1_pib = 0;
    int carta1_pontosturisticos = 0;
    float carta1_DensidadePopulacional = 0;
    float carta1_pibCapta = 0;
    float carta1_InversoDensidade;
    

    char carta2_estado[2] = ("");
    char carta2_codigo[4] = ("");
    char carta2_nomecidade[20] =("");
    unsigned long int carta2_populacao = 0;
    float carta2_area = 0;
    float carta2_pib = 0;
    int carta2_pontosturisticos = 0;
    float carta2_DensidadePopulacional = 0;
    float carta2_pibCapta = 0;
    float carta2_InversoDensidade;
    //Fim Declaracao de variaveis
    
    //Inicio Cadastro 1º carta
    printf("----------------------------- \n");
    printf("Cadastro 1º carta! \n-----------------------------\n");
    
    printf("Digite o Estado (Uma letra de 'A' a 'H'): ");
    scanf(" %s", &carta1_estado);
    
    printf("Código (A letra do estado seguida de um número de 01 a 04 ): ");
    scanf(" %s", &carta1_codigo);
    
    printf("Nome da cidade: ");
    scanf(" %s", &carta1_nomecidade);
    
    printf("População da cidade: ");
    scanf(" %lu", &carta1_populacao);

    printf("Área da cidade: ");
    scanf(" %f", &carta1_area);
    
    printf("Pib: ");
    scanf(" %f", &carta1_pib);
    
    printf("Pontos turisticos: ");
    scanf(" %d", &carta1_pontosturisticos);

    carta1_DensidadePopulacional = (float) (carta1_populacao/carta1_area);  //Calculo de variaveis que seram usadas na apresentação
    carta1_pibCapta = (float) (carta1_pib/carta1_populacao);
    carta1_InversoDensidade = (float) (carta1_area/carta1_populacao);       

    //Fim cadastro - Inicio de apresentação da 1º carta

    printf("----------------------------- \n");
    printf("Cadastro da 1º carta concluido!\n"); 
    printf("----------------------------- \n");

    printf("Carta 1: \n");
    printf("Estado: %s \n", carta1_estado);
    printf("Código: %s \n", carta1_codigo);
    printf("Nome da cidade: %s \n", carta1_nomecidade);
    printf("População: %lu \n", carta1_populacao);
    printf("Área: %.2f km² \n", carta1_area);
    printf("PIB: %3.2f bilhões de reais \n", carta1_pib);
    printf("Número de Pontos Turísticos: %d \n", carta1_pontosturisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1_DensidadePopulacional);
    printf("PIB per Capta: %.2f reais.\n", carta1_pibCapta);
    //Fim apresentação
   
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
    scanf(" %lu", &carta2_populacao);

    printf("Área da cidade: ");
    scanf(" %f", &carta2_area);
    
    printf("Pib: ");
    scanf(" %f", &carta2_pib);
    
    printf("Pontos turisticos: ");
    scanf(" %d", &carta2_pontosturisticos);

    carta2_DensidadePopulacional = (float)(carta2_populacao / carta2_area); //Calculo de variaveis que seram usadas na apresentação
    carta2_pibCapta = (float)(carta2_pib/carta2_populacao);
    carta2_InversoDensidade = (float) (carta2_area/carta2_populacao);
    
    printf("----------------------------- \n");
    printf("Cadastro da 2º carta concluido!\n----------------------------- \n\n");

    printf("Carta 2: \n");
    printf("Estado: %s \n", carta2_estado);
    printf("Código: %s \n", carta2_codigo);
    printf("Nome da cidade: %s \n", carta2_nomecidade);
    printf("População: %lu \n", carta2_populacao);
    printf("Área: %.2f km² \n", carta2_area);
    printf("PIB: %.2f bilhões de reais \n", carta2_pib);
    printf("Número de Pontos Turísticos: %d \n", carta2_pontosturisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2_DensidadePopulacional);
    printf("PIB per Capta: %.2f reais.\n", carta2_pibCapta);
    printf("----------------------------- \n");
    //Fim cadastro e apresentação
    
    //Calculo Super Poder
    float carta1_SuperPoder = (float)carta1_populacao + (float)carta1_area + (float)carta1_pib + (float)carta1_pontosturisticos + (float)carta1_pibCapta + (float)carta1_InversoDensidade;
    float carta2_SuperPoder = (float)carta2_populacao + (float)carta2_area + (float)carta2_pib + (float)carta2_pontosturisticos + (float)carta2_pibCapta + (float)carta2_InversoDensidade;
    /*
    Usei para testar se os valores estavam certos, descobri que se não colocar o numero pos virgula na calculadora a soma da calculadora da um valor a mais
    printf("SUPER PODER CARTA1 %.2f\n", carta1_SuperPoder);
    printf("SUPER PODER CARTA2 %.2f\n", carta2_SuperPoder);
    
    Inicio comparação
    */
    printf("-- Comparação de Cartas -- \n");
    printf("(Carta 1 vence se Vencedor = 1 - Carta 2 vence se Vencedor = 0)\n");
    printf("Carta 1 População: %lu - Carta 2 População: %lu - Vencedor: %d \n",carta1_populacao, carta2_populacao , carta1_populacao > carta2_populacao);
    printf("Carta 1 Área: %.2f - Carta 2 Área: %.2f - Vencedor: %d \n",carta1_area ,carta2_area ,carta1_area > carta2_area);
    printf("Carta 1 PIB: %.2f -Carta 2 PIB:  %.2f - Vencedor: %d \n",carta1_pib , carta2_pib,carta1_pib > carta2_pib);
    printf("Carta 1 Pontos turisticos: %d -  Carta 2 Pontos turisticos: %d - Vencedor: %d \n",carta1_pontosturisticos, carta2_pontosturisticos, carta1_pontosturisticos > carta2_pontosturisticos);
    printf("Carta 1 Densidade Pop: %.2f - Carta 2 Densidade Pop: %.2f - Vencedor: %d \n",carta1_DensidadePopulacional , carta2_DensidadePopulacional ,carta1_DensidadePopulacional < carta2_DensidadePopulacional);
    printf("Carta 1 PIB per Capita: %.2f -  Carta 2 PIB per Capita: %.2f - Vencedor: %d \n", carta1_pibCapta , carta2_pibCapta ,carta1_pibCapta > carta2_pibCapta);
    printf("Carta 1 Super Poder: %.2f - Carta 2 Super Poder: %.2f - Vencedor: %d \n", carta1_SuperPoder , carta2_SuperPoder ,carta1_SuperPoder > carta2_SuperPoder);
    

}
