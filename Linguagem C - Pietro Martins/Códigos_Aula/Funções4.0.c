#include <stdio.h>

// Prot�tipo da fun��o
int somar(int a, int b);

int main() {
    int resultado = somar(5, 3);
    printf("Resultado: %d\n", resultado);
    return 0;
}

// Defini��o da fun��o
int somar(int a, int b) {
    return a + b;
}
