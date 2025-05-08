#include <stdio.h>

int factorial(int valor, int valorAcumulado) {
	if (valor == 1) {
		return valorAcumulado;
	} else {
		return factorial(valor - 1, valor * valorAcumulado);
	}
}

int main() {
	int numero = 0;
	printf("De um numero: ");
	scanf("%d", &numero);
	int f = factorial(numero, 1);
	printf("O fatorial de %d é: %d\n", numero, f);
	return 0;
}