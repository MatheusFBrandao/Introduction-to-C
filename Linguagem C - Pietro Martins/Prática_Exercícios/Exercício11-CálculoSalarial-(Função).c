#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float salario_bruto(float horas, float salario){
	salario = horas*(salario/2)*0.97;
	return salario;
}

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");

	float h, s;

	printf("Insira o n�mero de horas trabalhadas:\n");
	scanf("%f", &h);
	printf("Insira o valor do sal�rio m�nimo:\n");
	scanf("%f", &s);
	
	printf("\n");
	
	printf("Sal�rio a receber: R$ %.2f", salario_bruto(h,s));
	
	return 0;
}
