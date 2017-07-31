#include <stdio.h>
#include <string.h>

int main()
{
    char frase[100];

    printf("Digite uma string: ");
    gets(frase);

    int c, letras = 0, digitos = 0;
    for(c = 0; c < strlen(frase); c++)
    {
        if( isalpha(frase[c]) )
            letras ++;
        else if( isdigit(frase[c]) )
            digitos ++;
    }

    printf("\n\nA frase lida foi \"%s\"\nEla tem %d caracteres sendo %d letras e %d digitos\n",
           frase, strlen(frase), letras, digitos);
    return 1;
}
