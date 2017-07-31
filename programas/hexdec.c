/*
    hexdec.c
    Este programa converte um numero expresso em base hexadecimal para seu equivalente em base decimal

    Exemplo:
    193B = 1*16^3 + 9*16^2 + 3*16^1 + 11*16^0 = 6459

    Somando todas as parcelas temos:  193B (hex) = 6459 (dec)

    UNIVERSIDADE DO ESTADO DE SANTA CATARINA (UDESC)
    Rogerio E. da Silva, 2017
*/
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int  i,              // variavel contadora da posiçao do numero a ser convertido
         expo,           // indica o valor do expoente da base 2 no calculo da conversao
         resultado;      // armazena o numero resultante da conversao
    char numero[15];     // armazena o numero a ser convertido


    // ------------------------ INTERFACE INICIAL ------------------------------
    printf("OBJETIVO: Conversao hexadecimal -> decimal\n\n");

    // ------------------------- ENTRADA DE DADOS ------------------------------
    printf("Digite um numero no sistema hexadecimal: ");
    scanf("%s", numero);

    // --------------------------- PROCESSAMENTO -------------------------------
    resultado = 0;
    expo      = 0;

    for(i=strlen(numero)-1; i >= 0; i--) // percorre a string de tras para frente
    {
        switch(numero[i])
        {
        case '1': resultado +=    pow(16,expo); break;
        case '2': resultado +=  2*pow(16,expo); break;
        case '3': resultado +=  3*pow(16,expo); break;
        case '4': resultado +=  4*pow(16,expo); break;
        case '5': resultado +=  5*pow(16,expo); break;
        case '6': resultado +=  6*pow(16,expo); break;
        case '7': resultado +=  7*pow(16,expo); break;
        case '8': resultado +=  8*pow(16,expo); break;
        case '9': resultado +=  9*pow(16,expo); break;
        case 'a':
        case 'A': resultado += 10*pow(16,expo); break;
        case 'b':
        case 'B': resultado += 11*pow(16,expo); break;
        case 'c':
        case 'C': resultado += 12*pow(16,expo); break;
        case 'd':
        case 'D': resultado += 13*pow(16,expo); break;
        case 'e':
        case 'E': resultado += 14*pow(16,expo); break;
        case 'f':
        case 'F': resultado += 15*pow(16,expo); break;
        }

        expo++;
    }

    // ------------------------- SAIDA DE RESULTADOS  ------------------------------
    printf("\nResultado da Conversao: %s (hex) = %d (dec)\n", numero, resultado);

    return 1; // encerramento do programa
}

