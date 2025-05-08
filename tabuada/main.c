#include <stdio.h>


int main() {
	int numero = 10;
	int resultado;

	for (numero = 1; numero <= 10; numero ++) {
		resultado = 5*numero;
		printf("5 x %d = %d\n", numero, resultado);
	}
	return 0;
}