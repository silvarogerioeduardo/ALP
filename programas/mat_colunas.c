/*
    mat_colunas.c
    Programa que le uma matriz de ordem MxN e apresente a soma dos elementos das colunas

    Rogerio Eduardo da Silva
    UDESC, Maio/2017
*/
#include <stdio.h>

int main()
{
    int M, N;

    // =================================== ENTRADA DE DADOS ================================

    printf("Digite a ordem da matriz: ");
    scanf("%d %d", &M, &N);

    int matriz[M][N], i, j, colunas[N];

    // ----------- LER MATRIZ -----------------
    for(i = 0; i < M; i++)
        for(j = 0; j < N; j++)
        {
            printf("Matriz[%d,%d]: ",i,j);
            scanf("%d", &matriz[i][j]);
        }

    // =================================== PROCESSAMENTO DE DADOS ================================

    for(j = 0; j < N; j++)
    {
        colunas[j] = 0;
        for(i = 0; i < M; i++)
            colunas[j] += matriz[i][j];
    }

    // =================================== SAIDA DE RESULTADOS ================================

    printf("\n\nVetor resultante: ");

    for(j = 0; j < N; j++)
        printf("%d ", colunas[j]);

    return 1;
}
