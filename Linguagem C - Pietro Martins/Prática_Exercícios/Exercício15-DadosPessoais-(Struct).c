/*Faça um programa que seja capaz de armazenar os dados de três pessoas mais seus respetivos: nome, idade, peso e altura.
Ao final, o algoritmo deve mostrar na tela o nome e a idade da primeira pessoa e o peso e a altura da última pessoa.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 3

struct dados_pessoais {
	char nome[50];
	int idade;
	float peso;
	float altura;
};

typedef struct dados_pessoais dados_pessoais;

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	dados_pessoais lista[TAM];
	int i;
	
	for (i=0; i<TAM; i++){
		printf("Insira os dados pessoais do %d° indivíduo:\n", i+1);
		
		puts("\nNome: ");
		scanf("%50[^\n]s", &lista[i].nome);
		
		puts("\nIdade: ");
		scanf("%d", &lista[i].idade);
		
		puts("\nPeso (em kg): ");
		scanf("%f", &lista[i].peso);
		
		puts("\nAltura (em m): ");
		scanf("%f", &lista[i].altura);
		
		printf("\n-------------------------------------------------------\n");
		fflush(stdin);
	}
	system("cls");
	
	for (i=0; i<TAM; i++){	
		if (i==0){
			printf("--------------- Indivíduo %d ---------------\n", i+1);
			printf("\n");
			printf("\tNome: %s.\n", lista[i].nome);
			printf("\tIdade: %d anos.\n", lista[i].idade);
		}
		
		if (i==2){
			printf("\n--------------- Indivíduo %d ---------------\n", i+1);
			printf("\n");
			printf("\tPeso: %.2f kg.\n", lista[i].peso);
			printf("\tAltura: %.2f m.\n", lista[i].altura);
		}
	}
	
	return 0;
}
