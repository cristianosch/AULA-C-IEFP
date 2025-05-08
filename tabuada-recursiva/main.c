//construir a tabuada de um numero atraves de uma função recursiva LinhaTabuada que mostra
// uma linha da tabuada e que se chama a si mesmo para a proxima



#include <stdio.h>

void LinhaTabuada(int n, int i) {
	if (i > 10) {
		return;
	} else {
		printf("%d x %d = %d\n", n, i, n * i);
		LinhaTabuada(n, i + 1);
	}
}

int main() {
	int numero = 0;
	printf("Digite um numero pra ver a tabuada: ");
	scanf("%d", &numero);

	LinhaTabuada(numero, 1);
	return 0;
}