#include <stdio.h>

#include <string.h>

#include <locale.h>

int main()

{

	setlocale(LC_ALL, "");

	char nome [20];

	printf("de o seu nome: ");

	scanf("%[^\n]",nome);

	if (strcmp(nome,"Cristiano") == 0)  //strcmp compara strings
		printf("Que nome tão bonito\n");

	else if (strcmp(nome,"luis") == 0)
		printf("Chumbado!!\n");

	else
		printf("Há melhor.\n");

		return 0;

}
 