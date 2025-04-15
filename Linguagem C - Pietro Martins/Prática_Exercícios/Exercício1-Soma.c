#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
		
	int n[4];
	int i;
	float s = 0;
	
	for(i=1; i<5; i++){
		printf("Insira o %d° número inteiro a ser somado:\n", i);
		scanf("%d", &n[i]);
		s += n[i];
    }
    
    printf("\n");
    printf("A soma dos números inseridos é: %.2f", s);
	
	return 0;
}
