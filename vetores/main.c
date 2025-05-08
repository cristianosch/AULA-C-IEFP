#include <stdio.h>


int main() {
	int numeros[5];
	int resultado;

	for (int i = 0; i < 5; i ++){
		printf("Digite o valor %d: ", i);
		scanf("%d", &numeros[i]);
		resultado += numeros[i];
	} 
	
	printf("Os valores dos vetores são: %d %d %d %d %d\n", numeros[0], numeros[1], numeros[2], numeros[3], numeros[4]);
	printf("A soma dos numeros é: %d\n", resultado);

	return 0;
}