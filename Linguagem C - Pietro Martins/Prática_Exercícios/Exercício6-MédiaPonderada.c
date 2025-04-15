#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2, n3, media;
	
	printf("Insira a nota do trabalho de laboratório:\n");
	scanf("%f", &n1);
	printf("Insira a nota da avaliação semestral:\n");
	scanf("%f", &n2);
	printf("Insira a nota do exame final:\n");
	scanf("%f", &n3);
	
	media = ((n1 * 2 + n2 * 3 + n3 * 5) / 10);
	
	printf("\n");
	
	if (n1 > 10 || n2 > 10 || n3 > 10){
		printf("Nota(s) inválida(s)! \nAtente-se: cada uma das notas variam entre 0 e 10, somente!");
	} else{
		if (media <= 10 && media >= 8){
			printf("Média Ponderada: %.2f", media);
			printf("\nConceito: A.\n");
		} else{
			if (media < 8 && media >= 7){
				printf("Média Ponderada: %.2f", media);
				printf("\nConceito: B.\n");	
			} else{
				if (media < 7 && media >= 6){
					printf("Média Ponderada: %.2f", media);
					printf("\nConceito: C.\n");
				} else{
					if (media < 6 && media >= 5){
						printf("Média Ponderada: %.2f", media);
						printf("\nConceito: D.\n");
					} else{
						if (media < 5 && media >= 0){
							printf("Média Ponderada: %.2f", media);
							printf("\nConceito: E.\n");
						} 
					}
				}
			}
		}
	}
	
	return 0;
}
