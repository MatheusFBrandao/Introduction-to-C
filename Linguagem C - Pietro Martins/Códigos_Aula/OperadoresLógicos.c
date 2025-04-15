#include <stdio.h>

int main(){
	
	float m;
	
	printf("Insira a nota: ");
	scanf("%f", &m);
	
	if(m >= 7.0){
		printf("Aprovado(a)!\n");
	}
	
	if(m < 7.0){
		printf("Reprovado(a)!\n");
	}
	
	if(m >= 4.0 && m < 7.0){
		printf("Tem direito a exame!\n");
	}
	
	if(m < 4.0 || m >= 7.0){
		printf("Nao tem direito a exame (ou) nao precisa faze-lo!\n");
	}
	
}
