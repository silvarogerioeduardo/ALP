/*
    dechex.c
    Este programa converte um numero expresso em base decimal para seu
    equivalente em base hexadecimal

    Exemplo:
    6459/16 = 403 (resto: 11 = B)
    403/16  = 25 (resto: 3)
    25/16   = 1  (resto: 9)

    Concatenando o ultimo quociente com todos os restos em ordem
    inversa temos: 6459 DEC = 193B HEX

    UNIVERSIDADE DO ESTADO DE SANTA CATARINA (UDESC)
    Rogerio E. da Silva, 2017
*/
#include <stdio.h>
#include <string.h>

int main()
{
    int  numero,         // armazena o numero a ser convertido
         numeroInicial,  // salva o numero inicial para posterior exibiçao no resultado
         resto;          // variavel auxiliar que armazena o resto de cada divisao para avaliaçao
    char resultado[15],  // armazena o resultado final da conversao
         temp[15];       // variavel temporaria que armazena a conversao de cada digito em binario


    // ------------------------ INTERFACE INICIAL ------------------------------
    printf("OBJETIVO: Conversao decimal -> hexadecimal\n\n");

    // ------------------------- ENTRADA DE DADOS ------------------------------
    printf("Digite um numero no sistema decimal: ");
    scanf("%d", &numero);

    // --------------------------- PROCESSAMENTO -------------------------------
    numeroInicial = numero;
    strcpy(resultado, "");

    while(numero > 15)
    {
        resto = numero % 16;
		switch(resto)
		{
		case  0: strcpy(temp, "0"); break;
		case  1: strcpy(temp, "1"); break;
		case  2: strcpy(temp, "2"); break;
		case  3: strcpy(temp, "3"); break;
		case  4: strcpy(temp, "4"); break;
		case  5: strcpy(temp, "5"); break;
		case  6: strcpy(temp, "6"); break;
		case  7: strcpy(temp, "7"); break;
		case  8: strcpy(temp, "8"); break;
		case  9: strcpy(temp, "9"); break;
		case 10: strcpy(temp, "A"); break;
		case 11: strcpy(temp, "B"); break;
		case 12: strcpy(temp, "C"); break;
		case 13: strcpy(temp, "D"); break;
		case 14: strcpy(temp, "E"); break;
		case 15: strcpy(temp, "F"); break;
		}
        strcpy(resultado, strcat(temp, resultado)); // resultado = temp + resultado

        numero /= 16;
    }

    // adiciona o ultimo numero ao resultado
	switch(numero)
	{
	case  0: strcpy(temp, "0"); break;
	case  1: strcpy(temp, "1"); break;
	case  2: strcpy(temp, "2"); break;
	case  3: strcpy(temp, "3"); break;
	case  4: strcpy(temp, "4"); break;
	case  5: strcpy(temp, "5"); break;
	case  6: strcpy(temp, "6"); break;
	case  7: strcpy(temp, "7"); break;
	case  8: strcpy(temp, "8"); break;
	case  9: strcpy(temp, "9"); break;
	case 10: strcpy(temp, "A"); break;
	case 11: strcpy(temp, "B"); break;
	case 12: strcpy(temp, "C"); break;
	case 13: strcpy(temp, "D"); break;
	case 14: strcpy(temp, "E"); break;
	case 15: strcpy(temp, "F"); break;
	}
    strcpy(resultado, strcat(temp, resultado));

    // ------------------------- SAIDA DE RESULTADOS  ------------------------------
    printf("\nResultado da Conversao: %d (dec) = %s (hex)\n", numeroInicial, resultado);

    return 1; // encerramento do programa
}

