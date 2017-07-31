#include <stdio.h>
#include <string.h>

int main()
{
    char fonte[100], copia[100], alvo[10];

    printf("Digite a string fonte: ");
    gets(fonte);

    strcpy(copia, fonte);

    printf("Digite a string alvo: ");
    gets(alvo);

    int c, ocorrencias = 0;

    for(c = 0; c < strlen(fonte)-strlen(alvo); c++)
    {
        if( strstr( fonte, alvo ))
        {
         strcpy( fonte, strstr( fonte, alvo ) + strlen(alvo));
            ocorrencias ++;
        }
    }

    printf("\n\nA frase \"%s\" ocorre %d vezes na frase \"%s\"\n",
           alvo, ocorrencias, copia);
    return 1;
}
