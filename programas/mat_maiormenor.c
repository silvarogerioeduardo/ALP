/*
   mat_maiormenor.c
   Programa responsavel por calcular o maior e menor elemento em uma matriz de ordem M.
   Apresente tambem a posição desses elementos na matriz.

   Rogerio Eduardo da Silva
   UDESC, Maio/2017
*/
#include <stdio.h>

int main()
{
   int M, i, j;

   printf("Digite a ordem da matriz: ");
   scanf("%d", &M);

   int matriz[M][M], maior, menor, maiorCOL, maiorLIN, menorCOL, menorLIN;

   for(i = 0; i < M; i++)
      for(j = 0; j < M; j++)
      {
          printf("Mat[%d][%d]: ", i,j);
          scanf("%d", &matriz[i][j]);
      }

   maior = menor = matriz[0][0];  // maior e menor assumem o valor do primeiro elemento da matriz
   maiorCOL = maiorLIN = menorCOL = menorLIN = 0; // posição inicial (0,0) tanto para o maior quanto para o menor

   for(i = 0; i < M; i++)
      for(j = 0; j < M; j++)
      {
          if(maior < matriz[i][j])
          {
              maior = matriz[i][j];
              maiorCOL = j;
              maiorLIN = i;
          }
          if(menor > matriz[i][j])
          {
              menor = matriz[i][j];
              menorCOL = j;
              menorLIN = i;
          }
      }

   printf("\n\nMaior elemento: %d Posicao: (%d, %d)\nMenor elemento: %d Posicao: (%d, %d)\n", maior, maiorLIN, maiorCOL, menor, menorLIN, menorCOL);

   return 1;
}
