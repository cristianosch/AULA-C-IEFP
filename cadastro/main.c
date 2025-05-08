#include <stdio.h>
#include <string.h>

// fgets função para ler string e salvar na variavel - função que le e armazena
// sizeof descobre o tamanho do vetor - limita os caracteres evitando estouro
// stdin vem do standard input, formas de uso stdin teclado, stdout tela, stderr mensagem de erro - determina fonte de entrada(teclado)

/*
ENTENDO fgets(p.nome, sizeof(p.nome), stdin);

fgets(copo, tamanho, torneira);

fgets = a ação de encher o copo

copo = onde a água vai

tamanho = limite do copo

torneira (stdin) = de onde vem a água
*/


struct pessoa {
	char nome[50];
	int idade;
};


int main(){
	struct pessoa p;
	printf("Digite o nome: ");
	fgets(p.nome, sizeof(p.nome), stdin);

	//Remove o \n do final se existir
	size_t len = strlen(p.nome);
	if (len > 0 && p.nome[len -1] == '\n') {
		p.nome[len -1] = '\0';
	}

	printf("Digite a idade: ");
	scanf("%d", &p.idade);

	printf("\nDados Cadastrados:\n");
    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);


	return 0;
}