#include <stdio.h>
#include <string.h>
#include <locale.h>

/* 
%[ → Começa uma lista de caracteres permitidos para leitura.

^ → Inverte a lógica: ao invés de aceitar os caracteres listados, ele aceita tudo EXCETO os caracteres listados.

\n → Quebra de linha (Enter).

] → Fecha a lista.
*/

int main() {
	
	char nome[20];
	int i=0;
	for (i=0; i<=19; i++)
		nome[i]='-'; 

	printf("Digite seu nome: ");
	scanf("%[^\n]", nome); 
	//printf("Seu nome é %s\n: ", nome);

	nome[9] = 0; // Apresenta ate 9 caracteres 
	printf("Seu nome é %s\n", nome);
	printf("E tem o seguinte comprimento: %zu caracteres\n", strlen(nome));

	for(i=0; i<=19; i++)
		printf("%c ou seja com codigo: %d\n", nome[i], nome[i]);
	return 0;
}