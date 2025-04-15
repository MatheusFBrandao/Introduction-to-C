#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int x, mat[3][3];
	int i, j, lin, col, cont;
	
	//Em C, os índices de arrays (incluindo matrizes) começam em 0, não em 1.//
	
	//No seu código, você está: ...
	// 1. Declarando uma matriz 3x3: mat[3][3] (índices válidos são 0-2 para linhas e colunas);
	// 2. Preenchendo a matriz usando índices de 1 a 3 (for(i=1; i<4; i++)) --> (antes da correção);
	// 3. Fazendo a busca também com índices de 1 a 3 --> (antes da correção).//
	
	//Quando você acessa mat[3][1], está indo além dos limites alocados para a matriz (que só vai até mat[2][2]),...
	//...o que resulta em comportamento indefinido, já que dá permissão pro sistema acessar memória que contém lixo ou outros valores do seu programa.//
	
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			printf("Insira o dado da posição [%d, %d]:\n", i+1, j+1);
			scanf("%d", &mat[i][j]);
		}
	}
	
	printf("\n");
	printf("Insira a chave de busca:\n");
	scanf("%d", &x);
	
	cont = 0;
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			if (mat[i][j] == x){
				cont = 1; 
				lin = i+1;
				col = j+1;
				break;
			}
		}
		if (cont == 1){
			break;
		}
	}
	
	printf("\n");
	
	if (cont == 1){
		printf("A chave %d está presente na matriz e pode ser encotrada na posição: [%d, %d].\n", x, lin, col);
	} else{
		printf("Chave não encontrada.\n");
	}
	
	return 0;
}
