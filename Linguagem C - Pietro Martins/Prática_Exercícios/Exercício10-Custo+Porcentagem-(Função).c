#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

float valor_lucro(float lucro, float valor){
	lucro = (lucro/100)*valor;
	return lucro;
}

float valor_imposto(float imposto, float valor){
	imposto = (imposto/100)*valor;
	return imposto;	
}

float valor_final(float fim, float valor){
	fim = (fim*valor/100) + valor;
	return fim;
}

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	float p, l, i;
	
	printf("Insira o preço de fábrica do carro:\n");
	scanf("%f", &p);
	printf("Insira a porcentagem de lucro do distribuidor:\n");
	scanf("%f", &l);
	printf("Insira a porcentagem de impostos:\n");
	scanf("%f", &i);
	
	printf("\n");
	
	printf("Lucro do distribuidor: R$ %.2f\n", valor_lucro(l,p));
	printf("Valor total dos impostos: R$ %.2f\n", valor_imposto(i,p));
	printf("Valor final do carro: R$ %.2f\n", valor_final(l+i,p));
	
	return 0;
}
