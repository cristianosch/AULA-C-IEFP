#include <stdio.h>

float raizQuadrada(float valor, float proximo) {
	printf("O proximo: %.2f\n", proximo);
	if (proximo * proximo >= (valor - 0.01)){
		return proximo;
	} else 
		return raizQuadrada(valor, proximo + 0.01);
}

int main() {
	float numero = 0;
	printf("Digite um numero: ");
	scanf("%f", &numero);
	float r = raizQuadrada(numero, 0);
	printf("A raiz quadrada é %.2f\n", r);
	return 0;
}