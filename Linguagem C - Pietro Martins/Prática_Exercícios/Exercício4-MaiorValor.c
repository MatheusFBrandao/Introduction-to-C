#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2;
	
	printf("Insira o primeiro número:\n");
	scanf("%d", &n1);
	printf("Insira o segundo número:\n");
	scanf("%d", &n2);
	
	printf("\n");
	
	if (n1 > n2){
		printf("O maior é: %d.\n", n1);
	} else{
		if (n2 > n1){
			printf("O maior é: %d.\n", n2);
		} else{
			printf("Os números são iguais.\n");
		}
	}

	return 0;
}
