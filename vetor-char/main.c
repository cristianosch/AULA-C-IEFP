/*
2. Crie um vetor de caracteres
     2.1 Crie um laço for que percorre cada posição e printa sua reprentação ascii
     2.2 Modifique o código para que agora ele printe a represntação em hexadecimal
*/
#include <stdio.h>

int main() {
	char vetor[25];	

	for (int i = 0; i < 25; i++){
		vetor[i] = 'a' + i;
		printf("Representação ASCII: %c = %d\n", vetor[i], vetor[i]);
		printf("Representação em Hexadecimal: %c = %x\n", vetor[i], vetor[i]);		
	}	
	return 0;
}