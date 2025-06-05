#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {

    //Declaração Variaveis 
    char carta1_estado[2] = ("A");
    char carta1_codigo[4] = ("A01");
    char carta1_nomecidade[20] = ("Campinas");
    unsigned long int carta1_populacao = 500;
    float carta1_area = 5000;
    float carta1_pib = 1500;
    int carta1_pontosturisticos = 7;
    float carta1_DensidadePopulacional = 3;
    float carta1_pibCapta = 654565;
    float carta1_InversoDensidade;
    int opcao1, opcao2;
    char *carta1_nomeatributo = malloc(50 * sizeof(char));
    float carta1_soma;
    int carta1_placar = 0;
    

    char carta2_estado[2] = ("B");
    char carta2_codigo[4] = ("B03");
    char carta2_nomecidade[20] =("Hortolandia");
    unsigned long int carta2_populacao = 4000;
    float carta2_area = 7000;
    float carta2_pib = 987987;
    int carta2_pontosturisticos = 7;
    float carta2_DensidadePopulacional = 98909;
    float carta2_pibCapta = 654565;
    float carta2_InversoDensidade;
    char *carta2_nomeatributo = malloc(50 * sizeof(char));
    float carta2_soma;
    int carta2_placar = 0;

    
    
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

    
    //Apresentação da 1º carta
    
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
    
    //Cadastro 2º carta. 
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
    
    //Apresentação da 2º carta
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
    
    

    //Calculo Densidade Carta 1 e 2
    carta1_DensidadePopulacional = (float) (carta1_populacao/carta1_area);  //Calculo de variaveis que seram usadas na apresentação
    carta1_pibCapta = (float) (carta1_pib/carta1_populacao);
    carta1_InversoDensidade = (float) (carta1_area/carta1_populacao); 

    carta2_DensidadePopulacional = (float)(carta2_populacao / carta2_area); //Calculo de variaveis que seram usadas na apresentação
    carta2_pibCapta = (float)(carta2_pib/carta2_populacao);
    carta2_InversoDensidade = (float) (carta2_area/carta2_populacao);
   
    //Calculo Super Poder carta 1 e 2 
    float carta1_SuperPoder = (float)carta1_populacao + (float)carta1_area + (float)carta1_pib + (float)carta1_pontosturisticos + (float)carta1_pibCapta + (float)carta1_InversoDensidade;
    float carta2_SuperPoder = (float)carta2_populacao + (float)carta2_area + (float)carta2_pib + (float)carta2_pontosturisticos + (float)carta2_pibCapta + (float)carta2_InversoDensidade;
    
    //Menu de escolha de atributos para o duelo

    printf("--- Comparação de Cartas --- \n");
    printf("Escolha o 1° atributo para a batalha: \n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    scanf("%d", &opcao1);

    //seleção do 2° atributo e nome para menus imbutidos
    switch (opcao1)
    {
        case 1:
            printf("\nEscolha o 2° atributo para a batalha: \n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Número de pontos turísticos\n");
            printf("5 - Densidade demográfica\n");
            scanf("%d", &opcao2);
            break;
        
        case 2:
            printf("\nEscolha o 2° atributo para a batalha: \n");
            printf("1 - População\n");
            printf("3 - PIB\n");
            printf("4 - Número de pontos turísticos\n");
            printf("5 - Densidade demográfica\n");
            scanf("%d", &opcao2);
            break;
        
        case 3:
            printf("\nEscolha o 2° atributo para a batalha: \n");
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("4 - Número de pontos turísticos\n");
            printf("5 - Densidade demográfica\n");
            scanf("%d", &opcao2);
            break;
        
        case 4:
            printf("\nEscolha o 2° atributo para a batalha: \n");
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("5 - Densidade demográfica\n");
            scanf("%d", &opcao2);
            break;
        
        case 5:
            printf("\nEscolha o 2° atributo para a batalha: \n");
            printf("1 - População\n");
            printf("2 - Área\n");
            printf("3 - PIB\n");
            printf("4 - Número de pontos turísticos\n");
            scanf("%d", &opcao2);
            break;
        
        default:
            printf("\nOpção Inválida, fechando programa....");
            break;
    }

    if (opcao1 == opcao2)
    {
        printf("VALOR INVALIDO SELECIONADO... Programa apresentara erro...");
    }
    
    
    //Seleção de nomes para menus
    if (opcao1 == 1){
        carta1_nomeatributo = "População";
    
    } else if (opcao1 == 2){
        carta1_nomeatributo = "Área";
    
    } else if (opcao1 == 3){
    carta1_nomeatributo = "PIB";

    } else if (opcao1 == 4){
        carta1_nomeatributo = "Pontos turísticos" ;
    
    } else if (opcao1 == 5){
        carta1_nomeatributo = "Densidade demográfica";

    }

    if (opcao2 == 1){
        carta2_nomeatributo = "População";
    
    } else if (opcao2 == 2){
        carta2_nomeatributo = "Área";
    
    } else if (opcao2 == 3){
    carta2_nomeatributo = "PIB";

    } else if (opcao2 == 4){
        carta2_nomeatributo = "Pontos turísticos" ;
    
    } else if (opcao2 == 5){
        carta2_nomeatributo = "Densidade demográfica";

    }
    
   //Menu de apresentação de cartas
    printf("\n----- É HORA DO DUELOOOOOOOOOO -----\n \n");
    printf("Duelo entre: %s x %s\n", carta1_nomecidade, carta2_nomecidade);
    if (carta1_nomeatributo == "Densidade demográfica")
    {
        printf("1° Atributo escolhido: %s (Obs: menor valor vence)\n", carta1_nomeatributo);
    } else{
        printf("1° Atributo escolhido: %s (Obs: maior valor vence)\n", carta1_nomeatributo);
    }
    
    if (carta2_nomeatributo == "Densidade demográfica")
    {
        printf("2° Atributo escolhido: %s (Obs: menor valor vence )\n", carta2_nomeatributo);
    } else{
        printf("2° Atributo escolhido: %s (Obs: maior valor vence)\n", carta2_nomeatributo);
    }
    

    //Comparação 1° atributo
    printf("\n-- 1° DUELO %s --\n", carta1_nomeatributo);
    switch (opcao1)
    {
        case 1:
        carta1_soma = carta1_populacao;
        carta2_soma = carta2_populacao;
        printf("Carta 1 Populaçao: %lu x Carta 2 População: %lu\n", carta1_populacao, carta2_populacao);
        if (carta1_populacao == carta2_populacao){
            printf("EMPATE! \n");
        } else if (carta1_populacao > carta2_populacao){
            carta1_placar += 1;
            printf("Carta 1 - %s VENCEU!\n", carta1_nomecidade);
        } else{
            carta2_placar += 1;
            printf("Carta 2 - %s VENCEU!\n", carta2_nomecidade);
        }      
    break;
    
    case 2:
        carta1_soma = carta1_area;
        carta2_soma = carta2_area;
        printf("Carta 1 Área: %.2f x Carta 2 Área: %.2f\n", carta1_area, carta2_area);
        if (carta1_area == carta2_area){
            printf("EMPATE! \n");
        } else if (carta1_area > carta2_area){
            carta1_placar += 1;
            printf("Carta 1 - %s VENCEU!\n", carta1_nomecidade);
        } else{
            carta2_placar += 1;
            printf("Carta 2 - %s VENCEU!\n", carta2_nomecidade);
        }      
    break;

    case 3:
        carta1_soma = carta1_pib;
        carta2_soma = carta2_pib;
        printf("Carta 1 PIB: %.2f x Carta 2 PIB: %.2f\n", carta1_pib, carta2_pib);
        if (carta1_pib == carta2_pib){
            printf("EMPATE! \n");
        } else if (carta1_pib > carta2_pib){
            carta1_placar += 1;
            printf("Carta 1 - %s VENCEU!\n", carta1_nomecidade);
        } else{
            carta2_placar += 1;
            printf("Carta 2 - %s VENCEU!\n", carta2_nomecidade);
        }      
    break;

    case 4:
        carta1_soma = carta1_pontosturisticos;
        carta2_soma = carta2_pontosturisticos;
        printf("Carta 1 Pontos turisticos: %d x Carta 2 Pontos turisticos: %d\n", carta1_pontosturisticos, carta2_pontosturisticos);
        if (carta1_pontosturisticos == carta2_pontosturisticos){
            printf("EMPATE! \n");
        } else if (carta1_pontosturisticos > carta2_pontosturisticos){
            printf("Carta 1 - %s VENCEU!\n", carta1_nomecidade);
            carta1_placar += 1;
        } else{
            carta2_placar += 1;
            printf("Carta 2 - %s VENCEU!\n", carta2_nomecidade);
        }      
    break;

    case 5:
        carta1_soma = carta1_DensidadePopulacional;
        carta2_soma = carta2_DensidadePopulacional;
        printf("Carta 1 Densidade Demografica: %.2f x Carta 2 Densidade Demografica: %.2f\n", carta1_DensidadePopulacional, carta2_DensidadePopulacional);
        if (carta1_DensidadePopulacional == carta2_DensidadePopulacional){
            printf("EMPATE! \n");
        } else if (carta1_DensidadePopulacional < carta2_DensidadePopulacional){
            printf("Carta 1 - %s VENCEU!\n", carta1_nomecidade);
            carta1_placar += 1;
        } else{
            carta2_placar += 1;
            printf("Carta 2 - %s VENCEU!\n", carta2_nomecidade);
        }      
    break;    
    
    default:
        break;
    }

    //Comparação 2° atributo
    printf("\n-- 2° DUELO %s --\n", carta2_nomeatributo);
    switch (opcao2)
    {
        case 1:
        carta1_soma += carta1_populacao;
        carta2_soma += carta2_populacao;
        printf("Carta 1 Populaçao: %lu x Carta 2 População: %lu\n", carta1_populacao, carta2_populacao);
        if (carta1_populacao == carta2_populacao){
            printf("EMPATE! \n");
        } else if (carta1_populacao > carta2_populacao){
            carta1_placar += 1;
            printf("Carta 1 - %s VENCEU!\n", carta1_nomecidade);
        } else{
            carta2_placar += 1;
            printf("Carta 2 - %s VENCEU!\n", carta2_nomecidade);
        }      
    break;
    
    case 2:
        carta1_soma += carta1_area;
        carta2_soma += carta2_area;
        printf("Carta 1 Área: %.2f x Carta 2 Área: %.2f\n", carta1_area, carta2_area);
        if (carta1_area == carta2_area){
            printf("EMPATE! \n");
        } else if (carta1_area > carta2_area){
            carta1_placar += 1;
            printf("Carta 1 - %s VENCEU!\n", carta1_nomecidade);
        } else{
            carta2_placar += 1;
            printf("Carta 2 - %s VENCEU!\n", carta2_nomecidade);
        }      
    break;

    case 3:
        carta1_soma += carta1_pib;
        carta2_soma += carta2_pib;
        printf("Carta 1 PIB: %.2f x Carta 2 PIB: %.2f\n", carta1_pib, carta2_pib);
        if (carta1_pib == carta2_pib){
            printf("EMPATE! \n");
        } else if (carta1_pib > carta2_pib){
            carta1_placar += 1;
            printf("Carta 1 - %s VENCEU!\n", carta1_nomecidade);
        } else{
            carta2_placar += 1;
            printf("Carta 2 - %s VENCEU!\n", carta2_nomecidade);
        }      
    break;

    case 4:
        carta1_soma += carta1_pontosturisticos;
        carta2_soma += carta2_pontosturisticos;
        printf("Carta 1 Pontos turisticos: %d x Carta 2 Pontos turisticos: %d\n", carta1_pontosturisticos, carta2_pontosturisticos);
        if (carta1_pontosturisticos == carta2_pontosturisticos){
            printf("EMPATE! \n");
        } else if (carta1_pontosturisticos > carta2_pontosturisticos){
            printf("Carta 1 - %s VENCEU!\n", carta1_nomecidade);
            carta1_placar += 1;
        } else{
            carta2_placar += 1;
            printf("Carta 2 - %s VENCEU!\n", carta2_nomecidade);
        }      
    break;

    case 5:
        carta1_soma += carta1_DensidadePopulacional;
        carta2_soma += carta2_DensidadePopulacional;
        printf("Carta 1 Densidade Demografica: %.2f x Carta 2 Densidade Demografica: %.2f\n", carta1_DensidadePopulacional, carta2_DensidadePopulacional);
        if (carta1_DensidadePopulacional == carta2_DensidadePopulacional){
            printf("EMPATE! \n");
        } else if (carta1_DensidadePopulacional < carta2_DensidadePopulacional){
            printf("Carta 1 - %s VENCEU!\n", carta1_nomecidade);
            carta1_placar += 1;
        } else{
            carta2_placar += 1;
            printf("Carta 2 - %s VENCEU!\n", carta2_nomecidade);
        }      
    break;    
    
    default:
        break;
    }

    printf("\n-- 3° Duelo SOMA DE ATRIBUTOS --\n");
    printf("Carta 1 - SOMA: %.2f\n", carta1_soma);
    printf("Carta 2 - SOMA: %.2f\n", carta2_soma);
    if (carta1_soma == carta2_soma){
            printf("EMPATE! \n");
        } else if (carta1_soma > carta2_soma){
            printf("Carta 1 - %s VENCEU!\n", carta1_nomecidade);
            carta1_placar += 1;
        } else{
            printf("Carta 2 - %s VENCEU!\n", carta2_nomecidade);
            carta2_placar += 1;
        }   
    
    printf("\n-- PLACAR --\n");
    printf("%s %d x %d %s",carta1_nomecidade, carta1_placar, carta2_placar, carta2_nomecidade);

}
