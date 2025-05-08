#include <stdio.h>

int AlteraVariavel(int* v){
	*v = *v + 10;
}

int main(){
	int x = 5;
	printf("Valor de x antes: %d\n", x);
	AlteraVariavel(&x);
	printf("Valor de x depois: %d\n", x);

	int* p1;
	p1 = &x;

	printf("Valor de x = %p\n", &x); // %p endereço de memoria
	printf("\nO valor apontado por p1 = %d", *p1);
	printf("\nO x = %d\n", x);
	
	//criar ponterio p2 a apontar para uma variavel y=3
	//mostrar o conteudo de y atraves de p2 ou seja *p2

	int y = 3;
	int* p2;
	p2 = &y;
	printf("\nO valor apontado por p2 = %d", *p2);
	printf("\nO y = %d\n", y);
	printf("\nO endereço de p2 é: %p\n", &p2);


	return 0;
}