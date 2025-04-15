#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int n, n1, n2;
	float soma, subt, mult, divis;
	
	printf("Digite 1 para somar;\n");
	printf("Digite 2 para subtrair;\n");
	printf("Digite 3 para multiplicar;\n");
	printf("Digite 4 para dividir;\n");
	scanf("%d", &n);
	
	if (n != 1 && n != 2 && n != 3 && n != 4){
		printf("Valor inválido.\n");
	} else{
		printf("Insira o primeiro valor inteiro:\n");
		scanf("%d", &n1);
		printf("Insira o segundo valor inteiro:\n");
		scanf("%d", &n2);
	}
	
	switch(n){
		case 1:
			soma = n1 + n2;
			printf("Soma: %.2f", soma);
			break;
		case 2:
			subt = n1 - n2;
			printf("Subtração: %.2f", subt);
            break;
		case 3:
			mult = n1 * n2;
			printf("Multiplicação: %.2f", mult);
			break;
		case 4:
			if (n2 == 0){
				printf("Divisão por zero.\n");
			} else{
				//já que "n1" e "n2" foram determinados como variáveis inteiras (int), a divisão, que pode gerar valores flutuantes/decimais (float)...
				//não ocorreria de forma satisfatória, já que "divis" (uma variável em float) receberia "n1" e "n2" (variáveis em int),...
				//resultando apenas em divisões com valores inteiros. Logo, caso n1=1 e n2=2, teríamos divis=0.00, e não divis=0.50. ...
				//por isso o "(float)n1 / n2" aqui serviu para determinar que a divisão deve gerar valores decimais, caso necessário!//
				divis = (float)n1 / n2;
				printf("Divisão: %.2f", divis);
				break;
			}
	}
	
	return 0;
}
