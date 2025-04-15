#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int v[9];
	int i, j, cont;
	
	for (i=1; i<10; i++){
		printf("Insira o dado da posição %d:\n", i);
		scanf("%d", &v[i]);
	}
	
	printf("\n");
	
	for (i=1; i<10; i++){
		cont = 0;
		for (j=1; j<=v[i]; j++){
			if (v[i] % j == 0){
				cont++;
			}
		}
		if (cont == 2){
			printf("%d é primo - posição: %d.\n", v[i], i);
		}
	}
		
	return 0;
}
