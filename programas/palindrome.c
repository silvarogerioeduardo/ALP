#include <stdio.h>
#include <string.h>

int main()
{
    char frase[100];

    printf("Digite uma string: ");
    gets(frase);

    char fraseinvertida[strlen(frase)];
    int c;

    // inverte a frase
    for(c = 0; c < strlen(frase); c++)
        fraseinvertida[c] = frase[strlen(frase)-c-1];

    int palindrome = 1;
    for(c = 0; c < strlen(frase); c++)
       if(frase[c] != fraseinvertida[c])
       {
           palindrome = 0;
           break;
       }

    if(palindrome)
        printf("\n\nA frase \"%s\" e palindrome\n\n", frase);
    else
        printf("\n\nA frase \"%s\" nao e palindrome\n\n", frase);

    return 1;
}
