#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int x, mat[3][3];
	int i, j, lin, col, cont;
	
	//Em C, os �ndices de arrays (incluindo matrizes) come�am em 0, n�o em 1.//
	
	//No seu c�digo, voc� est�: ...
	// 1. Declarando uma matriz 3x3: mat[3][3] (�ndices v�lidos s�o 0-2 para linhas e colunas);
	// 2. Preenchendo a matriz usando �ndices de 1 a 3 (for(i=1; i<4; i++)) --> (antes da corre��o);
	// 3. Fazendo a busca tamb�m com �ndices de 1 a 3 --> (antes da corre��o).//
	
	//Quando voc� acessa mat[3][1], est� indo al�m dos limites alocados para a matriz (que s� vai at� mat[2][2]),...
	//...o que resulta em comportamento indefinido, j� que d� permiss�o pro sistema acessar mem�ria que cont�m lixo ou outros valores do seu programa.//
	
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			printf("Insira o dado da posi��o [%d, %d]:\n", i+1, j+1);
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
		printf("A chave %d est� presente na matriz e pode ser encotrada na posi��o: [%d, %d].\n", x, lin, col);
	} else{
		printf("Chave n�o encontrada.\n");
	}
	
	return 0;
}
