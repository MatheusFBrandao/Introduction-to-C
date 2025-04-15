#include <stdio.h>

// Protótipo da função
int somar(int a, int b);

int main() {
    int resultado = somar(5, 3);
    printf("Resultado: %d\n", resultado);
    return 0;
}

// Definição da função
int somar(int a, int b) {
    return a + b;
}
