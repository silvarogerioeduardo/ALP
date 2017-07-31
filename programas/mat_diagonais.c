/*
    mat_diagonais.c
    Programa que le uma matriz quadrada de ordem M e apresente a soma dos elementos da diagonal principal e o produto dos elementos da diagonal secundaria

    Rogerio Eduardo da Silva
    UDESC, Maio/2017
*/
#include <stdio.h>

int main()
{
    int M;

    printf("Digite a ordem da matriz: ");
    scanf("%d", &M);

    int matriz[M][M], i, j, soma = 0, produto = 1;

    for(i = 0; i < M; i++)
        for(j = 0; j < M; j++)
        {
            printf("Matriz[%d,%d]: ",i,j);
            scanf("%d", &matriz[i][j]);
        }

    for(i = 0; i < M; i++)
        for(j = 0; j < M; j++)
        {
            if(i == j) // elemento pertence a diagonal principal
                soma += matriz[i][j];
            if(i+j == M-1) // elemento pertence a diagonal secundaria
                produto *= matriz[i][j];
        }

    printf("\n\nSoma dos elementos da diagonal principal = %d\n", soma);
    printf("Produto dos elementos da diagonal secundaria = %d\n", produto);

    return 1;
}
