#include <stdio.h>

int main()
{
	int num_inteiro;
	char sexo;
	float num_real;

	printf("\n ENTRADA d c f: ");

	scanf("%d %c %f", &num_inteiro, &sexo, &num_real);
	printf(" SAIDA: \n");
	printf(" Int: %d  Char: %c Real: %f", num_inteiro, sexo, num_real );

	return(1);
}
