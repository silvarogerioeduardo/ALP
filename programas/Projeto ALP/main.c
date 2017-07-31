#include "alp.h"

int main()
{
 
    
    // questao 4
    
   /*    int N,X, vetor[TAM], respostas[2];

    Entrada_de_dados(&N, vetor, &X );

    Processamento_de_dados( N, vetor, X, respostas );

    Saida_de_resultados( N, vetor, X, respostas );
    */

	// questao 5
	
    int M = LeInt("Ordem da Matriz:"), matriz[TAM][TAM];

    MatrizCebola(M,matriz);
    MostraMatriz(M,M,matriz);
    return 0;
}
