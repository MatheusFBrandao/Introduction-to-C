#include <stdio.h>

void imprimirMatriz(int mat[][4], int n) {
	int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < 4; j++) { 
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matriz[3][4] = {
        {1, 2, 3, 4},
        {50, 60, 70, 80},
        {91, 101, 111, 121}
    };

    printf("Imprimindo a matriz:\n");
    imprimirMatriz(matriz, 3);

    return 0;
}

