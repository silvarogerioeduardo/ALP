#include "alp.h"
#include <stdio.h>
#include <string.h>

int LeInt( char mensagem[50] )
{
    int valor;
    printf("%s", mensagem);
    scanf("%d", &valor);
    return valor;
}

void LeVetorInt( int N, int vetor[] )
{
    int i;
    char mensagem[50];

    for( i = 0; i < N; i++ )
    {
        sprintf( mensagem, "Vet[%d]= ", i );
        vetor[i] = LeInt(mensagem);
    }
}

void Entrada_de_dados( int *N, int vetor[], int *X )
{
    *N = LeInt( "Tamanho do vetor: " );
    LeVetorInt( *N,vetor );
    *X = LeInt("Digite X: ");
}

void Processamento_de_dados( int N, int vetor[], int X, int respostas[] )
{
    int i;

    respostas[0] = 0;
    respostas[1] = 1;

    for( i = 0; i < N; i++ )
    {
        if( vetor[i] > X )
            respostas[0] += vetor[i];
        if( vetor[i] < X )
            respostas[1] *= vetor[i];
    }
}

void Saida_de_resultados( int N, int vetor[], int X, int respostas[] )
{
    int i;

    printf( "\n\nVetor lido: ");
    for( i = 0; i < N; i++ )
        printf( " %d", vetor[i]);

    printf("\n\nA soma dos numeros maiores que %d = %d", X, respostas[0]);
    printf("\n\nO produto dos numeros menores que %d = %d", X, respostas[1]);
}

void MatrizCebola( int M, int matriz[TAM][TAM] )
{
    int i,j,k,L1=0,C1=0,L2=M,C2=M;

    for( k = M/2+1; k > 0; k-- )
    {
        for( i = L1; i < L2; i++ )
            for( j = C1; j < C2; j++ )
                matriz[i][j] = k;
        L1++;
        C1++;
        L2--;
        C2--;
    }
}

void MostraMatriz( int M, int N, int matriz[TAM][TAM] )
{
    int i,j;

    for( i = 0; i < M; i++ )
    {
        for( j = 0; j < N; j++ )
            printf("%3d ",matriz[i][j]);
        printf("\n");
    }
}
