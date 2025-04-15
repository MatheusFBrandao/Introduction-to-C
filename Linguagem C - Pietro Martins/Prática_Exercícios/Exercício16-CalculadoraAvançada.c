#include <stdio.h>

int main() {
    char op;
    float n1, n2, res;

    while(1) {  // Loop infinito at� encontrar 'e'
        // L� a opera��o (primeiro caractere da linha)
        op = getchar();
        
        // Se for 'e', termina o programa
        if(op == 'e') {
            break;
        }
        
        // L� os dois n�meros
        scanf("%f %f", &n1, &n2);
        
        // Limpa o buffer de entrada (incluindo o \n final)
        while(getchar() != '\n');

        switch(op) {
            case '+':
                res = n1 + n2;
                printf("%.6f\n", res);
                break;
            case '-':
                res = n1 - n2;
                printf("%.6f\n", res);
                break;
            case '*':
                res = n1 * n2;
                printf("%.6f\n", res);
                break;
            case '/':
                if(n2 != 0) {
                    res = n1 / n2;
                    printf("%.6f\n", res);
                } else {
                    printf("Erro: divis�o por zero!\n");
                }
                break;
            default:
                printf("Opera��o inv�lida!\n");
        }
    }

    return 0;
}
