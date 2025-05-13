#include <stdio.h>

int main(){
	char matriz[3][3];

	for (int linha = 0; linha < 3; linha ++){
		for (int coluna = 0; coluna < 3; coluna ++){
			matriz[linha][coluna] = 'o';
			printf("%c ", matriz[linha][coluna]);
		}
		printf("\n");
	}
	printf("\n");

	char matrix[5][5];
	char letra;

	printf("Digite a letra para começar: \n");
	scanf("%c", &letra);

    for (int linha = 0; linha < 5; linha++) {
        for (int coluna = 0; coluna < 5; coluna++) {
            matrix[linha][coluna] = letra + coluna;  // altera o caractere com base na coluna
            printf("%c ", matrix[linha][coluna]);
        }
        printf("\n");
    }

	return 0;
}
