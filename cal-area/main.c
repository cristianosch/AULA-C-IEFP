#include <stdio.h>

struct rectangulo {
	int base;
	int largura;
	char cor_vector[20];	
};

int main(){
	struct rectangulo r1, r2;
	printf("Digite valor para a base: ");
	scanf("%d", &r1.base);
	printf("Digite valor para a largura: ");
	scanf("%d", &r1.largura);

	r2.base = r1.base * 2;
	r2.largura = 33;
	printf("r1: base: %d largura: %d\n", r1.base, r1.largura);
	printf("r2: base: %d largura: %d\n", r2.base, r2.largura );
	return 0;
}