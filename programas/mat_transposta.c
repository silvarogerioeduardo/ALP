/*
   mat_transposta.c
   Programa responsavel por calcular a matriz transposta de uma matriz quadrada de ordem M

   Rogerio Eduardo da Silva
   UDESC, Maio/2017
*/
#include <stdio.h>

int main()
{
   int M;

   printf("Digite a ordem da matriz: ");
   scanf("%d", &M);

   int matriz[M][M], transposta[M][M];

   for(i = 0; i < M; i++)
      for(j = 0; j < M; j++)
      {
          printf("Mat[%d][%d]: ", i,j);
          scanf("%d", &matriz[i][j]);
      }

   for(i = 0; i < M; i++)
      for(j = 0; j < M; j++)
         transposta[j][i] = matriz[i][j];

   for(i = 0; i < M; i++)
   {
      for(j = 0; j < M; j++)
          printf("%d ", transposta[i][j]);
      printf("\n");
   }

   return 1;
}
