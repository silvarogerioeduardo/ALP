/*
    Programa: mat_multiplica.c
    Objetivo: Efetuar a multiplicação de duas matrizes mat1 (MxN) e mat2 (PxQ), resultando na mat3 (MxQ)
    Restrições: O numero de linhas da primeira matriz precisa NECESSARIAMENTE ser igual ao numero de colunas da segunda matriz (N == P)

   Rogerio Eduardo da Silva
   UDESC, Novembro/2016
*/
#include <stdio.h>

int main()
{
    int M,N,P,Q;

    // ****************** ENTRADA DE DADOS: fase 1 ********************************

    printf("Digite as dimensoes da matriz 1: ");
    scanf("%d %d", &M, &N);

    printf("\nDigite as dimensoes da matriz 2: ");
    scanf("%d %d", &P, &Q);

    if(N != P)
        printf("Multiplicação impossivel!\nNumero de linhas da matriz 1 diferente do numero de colunas da matriz 2\n");

    else // indica que N == P, portanto multiplicação é possivel...
    {
        int mat1[M][N], mat2[P][Q], mat3[M][Q], i, j, k;

        // ****************** ENTRADA DE DADOS: fase 2 ********************************

        printf("Digite a matriz 1 (MxN)\n");
        for(i=0; i<M; i++)
            for(j=0; j<N; j++)
            {
                printf("Mat 1 [%d,%d]: ",i,j);
                scanf("%d", &mat1[i][j]);
            }

        printf("Digite a matriz 2 (PxQ)\n");
        for(i=0; i<P; i++)
            for(j=0; j<Q; j++)
            {
                printf("Mat 2 [%d,%d]: ",i,j);
                scanf("%d", &mat2[i][j]);
            }
        // FIM DA ENTRADA DE DADOS

        // ******************** PROCESSAMENTO: CALCULO DA MULTIPLICAÇÃO DAS MATRIZES *****************************
        for(i=0; i<M; i++)
            for(j=0; j<Q; j++)
            {
                mat3[i][j] = 0;
                for(k=0; k<N; k++)
                    mat3[i][j] += mat1[i][k] * mat2[k][j];
            }
        // FIM DO PROCESSAMENTO

        // ****************** SAIDA DE RESULTADOS: MATRIZ RESULTANTE **************************
        printf("\n\nMatriz Resultante\n");
        for(i=0; i<M; i++)
        {
            for(j=0; j<Q; j++)
                printf("%d ", mat3[i][j]);
            printf("\n");
        }
        // FIM DA SAIDE DE RESULTADOS
    }

    return 1;
}
