/*
   Arquivo: comment.c
   Programa exemplo da utilizacao de comentarios
   Desenvolvido por Rogerio Eduardo da Silva, UDESC (2017)
*/
#include <stdio.h>

int main()
{
   int iEntrada; // variavel inicial de entrada de dados
   
   // ENTRADA DE DADOS
   printf("Digite um valor: ");
   scanf("%i",&iEntrada);
   
   // PROCESSAMENTO
   int iSaida; // variavel que contem o resultado do processamento 
   iSaida = iEntrada * iEntrada;
   
   // SAIDA DE RESULTADOS
   printf("O quadrado de %d = %d\n", iEntrada, iSaida);
   return 1;
}