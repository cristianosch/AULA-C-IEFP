#include <stdio.h>

int main() {
	int a, b, c;
	printf("Digite o primeiro numero: ");
	scanf("%d", &a);

	printf("Digite o valor do segundo numero: ");
	scanf("%d", &b);

	c = a + b;

	printf("O valor da soma dos dois numeros é: %d\n", c);

	return 0;
}