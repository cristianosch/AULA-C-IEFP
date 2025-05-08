#include <stdio.h>


int fatorial(int n) {	
	int resultado = 1;

	for (int i = 1; i <= n; i++){
		resultado *= i;
	}
	return resultado;
}

int main(){
	int numero;
	printf("Digite um numero para calcular o fatorial: ");
	scanf("%d", &numero);

	int resultado = fatorial(numero);
	printf("O fatorial de %d é: %d\n", numero, resultado);
	
	return 0;
}