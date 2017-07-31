/*
   subrotinas.c

   Programa que exemplifica o uso de procedimentos e funções

   Rogerio Eduardo da Silva, UDESC
   Maio, 2017.
*/

#include <stdio.h>
#include <stdlib.h>

void Interface()
{
    system("cls"); // limpa a tela
    printf("+-------+-------------------------------------------------------------+------+\n");
    printf("| UDESC |                   ROGERIO EDUARDO DA SILVA                  | 2017 |\n");
    printf("+-------+-------------------------------------------------------------+------+\n");
    printf("|  OBJETIVO; Este programa calcula a media entre N valores fornecidos        |\n");
    printf("+----------------------------------------------------------------------------+\n");
}

int LeInt()
{
    int valor;
    printf("\nDigite um valor inteiro: ");
    scanf("%d", &valor);
    return valor;
}

float CalculaMedia()
{
    int N = LeInt();

    int contador;
    float soma = 0;

    for(contador = 1; contador <= N; contador++)
        soma += LeInt();

    return soma / N;
}

int main()
{
    int i;
    for(i = 0; i < 3; i++)
    {
        Interface();
        printf("\n\nA media entre os valores fornecidos e igual a %.2f\n\n", CalculaMedia());
        system("pause"); // espera uma tecla ser pressionada
    }

    return 1;
}
