#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//defi��o do procedimento://
//nesse caso, temos par�metros de entrada e sa�da envolvidos.//
//aqui, ao inv�s dos par�metros de entrada serem antecedidos de "&", eles sucedem...
//...o asterisco ("*"), determinando que ser�o retornados na fun��o principal...
//... sem a necessidade de especificar o "return x" no final da fun��o.//
void calcKW(float v_sal, float q_kw, float *v_kw, float *v_rs, float *v_dsc){
	(*v_kw) = v_sal / 1000;
	(*v_rs) = (*v_kw) * q_kw;
	(*v_dsc) = (*v_rs) * 0.85;
}

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL, "Portuguese");
	
	float val_sal, qtde_kw, val_kw, val_reais, val_desc;
	
	printf("Insira o sal�rio m�nimo:\n");
	scanf("%f", &val_sal);
	printf("Insira a quantidade de KW gastos:\n");
	scanf("%f", &qtde_kw);
	
	printf("\n");
	
	//retornando o procedimento dentro da fun��o principal.//
	//os par�metros de entrada, como de costume, ser�o antecedidos de "&" nessa declara��o.//
	calcKW(val_sal, qtde_kw, &val_kw, &val_reais, &val_desc);
	
	printf("Valor de 1KW (em R$): %.2f\n", val_kw);
	printf("Valor a ser pago (em R$): %.2f\n", val_reais);
	printf("Valor com desconto de 15% (em R$): %.2f\n", val_desc);
	
	return 0;
}
