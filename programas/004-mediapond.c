#include <stdio.h>

int main()
{
  float Nota_1, Nota_2, Nota_3, Media;
  int Peso_1, Peso_2, Peso_3;

  printf("Objetivo: Este programa calcula a media ponderada entre tres notas:\n\n");

  printf("Digite a primeira nota: ");
  scanf("%f", &Nota_1);

  printf("Digite o peso da primeira nota: ");
  scanf("%d", &Peso_1);

  printf("Digite a segunda nota: ");
  scanf("%f", &Nota_2);

  printf("Digite o peso da segunda nota: ");
  scanf("%d", &Peso_2);

  printf("Digite a terceira nota: ");
  scanf("%f", &Nota_3);

  printf("Digite o peso da terceira nota: ");
  scanf("%d", &Peso_3);

  Media = (Nota_1*Peso_1 + Nota_2*Peso_2 + Nota_3*Peso_3) / 
          (Peso_1 + Peso_2 + Peso_3);

  printf("\n\nA media entre as notas digitadas = %.1f\n", Media);
  return(1);
}
