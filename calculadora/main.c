// fazer uma calculadora que recebe os dois operadores
// em duas variaveis inteiras
// e a operação a executar num array de 2 caracteres
//(use a função strcmp vara verificar a operação pedida)

#include <stdio.h>

#include <string.h>

#include <locale.h>

int main()

{
	setlocale(LC_ALL, "");

	int num1, num2;
	char operacao[2];

	printf("Digite o primeiro número: ");
	scanf("%d", &num1);

	printf("Digite o segundo número: ");
	scanf("%d", &num2);

	printf("Digite a operação (+, -, *, /): ");
	scanf("%s", operacao);

	if (strcmp(operacao, "+") == 0) {
		printf("Resultado: %d\n", num1 + num2);
	} else if (strcmp(operacao, "-") == 0) {
		printf("Resultado: %d\n", num1 - num2);
	} else if (strcmp(operacao, "*") == 0) {
		printf("Resultado: %d\n", num1 * num2);
	} else if (strcmp(operacao, "/") == 0) {
		if (num2 != 0) {
			printf("Resultado: %d\n", num1 / num2);
		} else {
			printf("Erro: Divisão por zero!\n");
		}
	} else {
		printf("Operação inválida!\n");
	}

	return 0;

}