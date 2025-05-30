#include <stdio.h>

int main () {

  int nota1 = 0, nota2 = 0, nota3 = 0;
  float media = 0;

  printf("---PROGRAMA DE CALCULO DA MÉDIA ---\n");
  
  printf("Digite a sua 1º nota: \n");
  scanf("%d", &nota1);

  printf("Digite a sua 2º nota: \n");
  scanf("%d", &nota2);

  printf("Digite a sua 3º nota: \n");
  scanf("%d", &nota3);

  media = (float) (nota1 + nota2 + nota3) / 3;

  printf("A média é: %.2f", media);

  return 0;
  

}
