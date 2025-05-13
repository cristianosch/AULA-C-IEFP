#include <stdio.h>

int main() {
	int termos = 10;
	int primeiro = 0;
	int segundo = 1;
	int proximo;

	printf("Sequência de Fibonacci com %d termos: \n", termos);

	for (int i = 0; i < termos; i ++){
		if (i == 0){
			proximo = primeiro;		
		} else if (i == 1) {
			proximo = segundo;
		} else {
			proximo = primeiro + segundo;
			primeiro = segundo;
			segundo = proximo;
		}
		printf("%d ", proximo);
	}
	printf("\n");	

	return 0;
}