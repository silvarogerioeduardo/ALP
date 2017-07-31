/*
   conjuntos.c

   Programa para calcular a uniao, interseccao e diferenca entre os elementos de dois conjuntos A e B que nao precisam
   necessariamente ter o mesmo tamanho

   UNIVERSIDADE DO ESTADO DE SANTA CATARINA - UDESC
   Desenvolvido por Rogerio Eduardo da Silva, 2017
*/
#include <stdio.h>

int main()
{
    int tamA, tamB, i, j;

    // =======================================================================================
    // =========================== ENTRADA DE DADOS ==========================================
    // =======================================================================================
    printf("Digite o tamanho do conjunto A: ");
    scanf("%d", &tamA);

    int A[tamA];

    printf("Digite os elementos do conjunto A:\n");
    for(i = 0; i < tamA; i++)
    {
        printf("A[%d] = ", i);
        scanf("%d", &A[i]);
    }

    // ----------------------------------------------------------------

    printf("\nDigite o tamanho do conjunto B: ");
    scanf("%d", &tamB);

    int B[tamB];

    printf("Digite os elementos do conjunto B:\n");
    for(i = 0; i < tamB; i++)
    {
        printf("B[%d] = ", i);
        scanf("%d", &B[i]);
    }

    int maior = tamA > tamB ? tamA : tamB;
    int uniao[tamA+tamB], diferencaA_B[maior], diferencaB_A[maior], interseccao[maior];
    int tamUni, tamDifA_B, tamDifB_A, tamInt, flag;

    // =======================================================================================
    // ================================ PROCESSAMENTO ========================================
    // =======================================================================================

    // ---------------------------------- UNIAO ----------------------------------------------
    for(i = 0; i < tamA; i++)
        uniao[i] = A[i];
    tamUni = tamA;

    for(i = 0; i < tamB; i++)
    {
        flag = 1;
        for(j = 0; j < tamUni; j++)
        {
            if(uniao[j] == B[i])
            {
                flag = 0;
                break;
            }
        }
        if(flag)
            uniao[tamUni++] = B[i];
    }

    // ---------------------------------- INTERSECÇAO ----------------------------------------------
    tamInt = 0;
    for(i = 0; i < tamA; i++)
    {
        flag = 0;
        for(j = 0; j < tamB; j++)
        {
            if(A[i] == B[j])
            {
                flag = 1;
                break;
            }
        }
        if(flag)
            interseccao[tamInt++] = A[i];
    }

    // ---------------------------------- DIFERENÇA: A - B ----------------------------------------------
    tamDifA_B = 0;
    for(i = 0; i < tamA; i++)
    {
        flag = 0;
        for(j = 0; j < tamB; j++)
        {
            if(A[i] == B[j])
            {
                flag = 1;
                break;
            }
        }
        if(!flag)
            diferencaA_B[tamDifA_B++] = A[i];
    }

    // ---------------------------------- DIFERENÇA: B - A ----------------------------------------------
    tamDifB_A = 0;
    for(j = 0; j < tamB; j++)
    {
        flag = 0;
        for(i = 0; i < tamA; i++)
        {
            if(A[i] == B[j])
            {
                flag = 1;
                break;
            }
        }
        if(!flag)
            diferencaB_A[tamDifB_A++] = B[j];
    }

    // =======================================================================================
    // ============================ SAIDA DE RESULTADOS ======================================
    // =======================================================================================
    printf("\n\nUniao dos conjuntos A e B: ");
    for(i = 0; i < tamUni; i++)
        printf("%d ", uniao[i]);

    printf("\nInterseccao dos conjuntos A e B: ");
    for(i = 0; i < tamInt; i++)
        printf("%d ", interseccao[i]);

    printf("\nDiferenca dos conjuntos A e B: ");
    for(i = 0; i < tamDifA_B; i++)
        printf("%d ", diferencaA_B[i]);

    printf("\nDiferenca dos conjuntos B e A: ");
    for(i = 0; i < tamDifB_A; i++)
        printf("%d ", diferencaB_A[i]);

    return 1;
}
