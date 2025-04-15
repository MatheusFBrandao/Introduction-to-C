#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");

	int seg, min, h;
	
	printf("Insira o tempo em segundos:\n");
	scanf("%d", &seg);
	
	min = (seg / 60);
	h = (min / 60);
	
	printf("Horas: %d\n", h);
	printf("Minutos: %d\n", min);
	printf("Segundos: %d\n", seg);
	
	return 0;
}
