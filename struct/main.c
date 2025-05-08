#include <stdio.h>

struct rectangulo {
	int lado1;
	int lado2;
};

struct bloco {
	struct rectangulo base;
	int altura;
};

int main() {
	struct rectangulo r1;
	r1.lado1 = 3;
	r1.lado2 = 25;
	printf("Lado1 de r1: %d\n", r1.lado1);
	printf("lado2 de r1: %d\n", r1.lado2);

	struct bloco b1;
	b1.base.lado1 = 3;
	b1.base.lado2 = 2;
	b1.altura = 4;
	printf("Lado 1 da base de b1: %d\n", b1.base.lado1);
	printf("Lado 2 da base de b2: %d\n", b1.base.lado2);

	return 0;
}