#include <stdio.h>

int main()
{
    char  sNome[10];   // nome do funcionario
    char  cCategoria;  // categoria funcional: A, B ou C
    float fSalarioBase,  // salario inicial
          fSalarioReajustado, // salario apos reajuste de 13%
          fSalarioBruto,  // salario apos gratificacao de 20%
          fSalarioLiquido; // salario final apos desconto de 15% por INSS

    printf("Objetivo: Este programa calcula o salario de um funcionario de acordo com regras 
	        trabalhistas\n\n");
    printf("Digite o nome do funcionario: ");
    gets(sNome);  

    printf("Digite a categoria do funcionario (A, B ou C): ");
    scanf("%c",&cCategoria);

    printf("Digite o salario base do funcionario: ");
    scanf("%f",&fSalarioBase);

    fSalarioReajustado = fSalarioBase * 1.13;
    fSalarioBruto      = fSalarioReajustado + fSalarioBase * 0.2;
    fSalarioLiquido    = fSalarioBruto * 0.85;

    printf("\n\n\nNome do Funcionario: %s\n", sNome);
    printf("Categoria Funcional: %c\n", cCategoria);
    printf("Salario Bruto: R$%.2f\n", fSalarioBruto);
    printf("Salario Liquido R$%.2f\n",fSalarioLiquido);

    return(1);
}
