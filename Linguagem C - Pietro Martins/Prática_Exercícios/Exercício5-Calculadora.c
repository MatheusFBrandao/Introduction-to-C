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
		printf("Valor inv�lido.\n");
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
			printf("Subtra��o: %.2f", subt);
            break;
		case 3:
			mult = n1 * n2;
			printf("Multiplica��o: %.2f", mult);
			break;
		case 4:
			if (n2 == 0){
				printf("Divis�o por zero.\n");
			} else{
				//j� que "n1" e "n2" foram determinados como vari�veis inteiras (int), a divis�o, que pode gerar valores flutuantes/decimais (float)...
				//n�o ocorreria de forma satisfat�ria, j� que "divis" (uma vari�vel em float) receberia "n1" e "n2" (vari�veis em int),...
				//resultando apenas em divis�es com valores inteiros. Logo, caso n1=1 e n2=2, ter�amos divis=0.00, e n�o divis=0.50. ...
				//por isso o "(float)n1 / n2" aqui serviu para determinar que a divis�o deve gerar valores decimais, caso necess�rio!//
				divis = (float)n1 / n2;
				printf("Divis�o: %.2f", divis);
				break;
			}
	}
	
	return 0;
}
