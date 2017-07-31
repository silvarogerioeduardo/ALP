#include <stdio.h>
#include <string.h>

int main()
{
    char frase[100];

    printf("Digite uma string: ");
    gets(frase);

    int c, i, tam = strlen(frase);

    c = 0;
    while(c < tam)
    {
        if( strchr("aeiouAEIOU ", frase[c]) )
        {
            tam --;
            for( i = c; i < tam; i++ )
                frase[i] = frase[i+1];
        }
        else
            c++;
    }

    for(c = 0; c < tam; c++)
        printf("%c", frase[c]);

    return 1;
}
