#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");

	float salario, percent, aumento, Nsalario;
	
	printf("Insira o sal�rio:\n");
	scanf("%f", &salario);
	printf("Insira o percentual de aumento desse sal�rio:\n");
	scanf("%f", &percent);
	
	Nsalario = salario * (1 + percent/100);
	aumento = Nsalario - salario;
	
	printf("\n");
	printf("Valor do aumento: %.2f\n", aumento);
	printf("Novo sal�rio: %.2f", Nsalario); 
	
	return 0;
}
