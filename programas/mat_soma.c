/*
    mat_soma.c
    Programa que soma duas matrizes de ordem MxN

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

    int mat_A[M][N], mat_B[M][N], mat_C[M][N], i, j;

    // ----------- LER MATRIZ A -----------------
    for(i = 0; i < M; i++)
        for(j = 0; j < N; j++)
        {
            printf("Matriz A[%d,%d]: ",i,j);
            scanf("%d", &mat_A[i][j]);
        }
    // ----------- LER MATRIZ B -----------------
    for(i = 0; i < M; i++)
        for(j = 0; j < N; j++)
        {
            printf("Matriz B[%d,%d]: ",i,j);
            scanf("%d", &mat_B[i][j]);
        }

    // =================================== PROCESSAMENTO DE DADOS ================================

    for(i = 0; i < M; i++)
        for(j = 0; j < N; j++)
            mat_C[i][j] = mat_A[i][j] + mat_B[i][j];

    // =================================== SAIDA DE RESULTADOS ================================

    printf("\n\n--- Matriz Resultante --- \n");
    for(i = 0; i < M; i++)
    {
        for(j = 0; j < N; j++)
            printf("%3d ", mat_C[i][j]);
        printf("\n");
    }

    return 1;
}
