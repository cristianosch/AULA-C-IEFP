#include <stdio.h>

int main(){
	int numero;
	printf("Digite um numero e vamos verificar se o numero é par: ");
	scanf("%d", &numero);

	if (numero % 2 == 0) {
		printf("O numero é par!\n");
	} else {
		printf("O numero é impar!\n");
	}

}