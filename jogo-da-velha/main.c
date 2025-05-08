#include <stdio.h>

char tabuleiro[3][3];

// Função para limpar o tabuleiro

void limparTabuleiro() {
	int linha, coluna;
	for (linha = 0; linha < 3; linha++) {
		for (coluna = 0; coluna < 3; coluna++) {
			tabuleiro[linha][coluna] = ' ';
		}
	}
}

// Função para exibir o tabuleiro

void MostrarTabuleiro() {
	int linha, coluna;
	printf(" \n");
	for (linha = 0; linha < 3; linha++) {
		printf("%d  ", linha);
		for (coluna = 0; coluna < 3; coluna++) {
			printf("%c", tabuleiro[linha][coluna]);
			if (coluna < 2) {
				printf(" | ");
			}
		}
		printf("\n");
		if (linha < 2) {
			printf("   ----------\n");
		}
	}
}

// Função para perguntar a posição da linha ao jogador

int PerguntarALinhaDoProximoPeao() {
	int linha;
	printf("Qual a linha(0-2): ");
	scanf("%d", &linha);
	return linha;
}

// Função para perguntar a posição da coluna ao jogador

int PerguntarAColunaDoProximoPeao() {
	int coluna;
	printf("Qual a coluna(0-2): ");
	scanf("%d", &coluna);
	return coluna;
}

// Função para colocar o peão na posição escolhida

void PorPeaoNoTabuleiro(char peao, int linha, int coluna) {
	if (tabuleiro[linha][coluna] == ' ') {
		tabuleiro[linha][coluna] = peao;
	} else {
		printf("Essa posição já está ocupada!\n");
	}
}
// Função para verificar se há um vencedor

int VerificarSeJogadavencedora(char peao) {
	int linha;
	for(linha = 0; linha < 3; linha++)
	{
		if ((tabuleiro[linha][0] == peao && tabuleiro[linha][1] == peao && tabuleiro[linha][2] == peao) || // Verifica linhas
			(tabuleiro[0][linha] == peao && tabuleiro[1][linha] == peao && tabuleiro[2][linha] == peao)) { // Verifica colunas				
			return 1;
			break;
		}
		if ((tabuleiro[0][0] == peao && tabuleiro[1][1] == peao && tabuleiro[2][2] == peao) || // Verifica diagonal principal
			(tabuleiro[0][2] == peao && tabuleiro[1][1] == peao && tabuleiro[2][0] == peao)) { // Verifica diagonal secundária
			return 1;
			break;
		}
		
	}
	return 0;
}
/*
int main()
{
	limparTabuleiro();
	while(1) {
		{
			int linha, coluna = 0;
			printf("Jogador O:\n");
			MostrarTabuleiro();
			linha = PerguntarALinhaDoProximoPeao();
			coluna = PerguntarAColunaDoProximoPeao();
			PorPeaoNoTabuleiro('O', linha, coluna);
			int ganhou = VerificarSeJogadavencedora('O');
			if (ganhou == 1) 
				{printf("O jogagor O ganhou!\n"); return 1;}
		}
	}
	return 0;
}
*/


// Por o computador para jogar como jogador X

int ComputadorJogar() {
	int linha, coluna;
	// Lógica para o computador jogar
	// Aqui você pode implementar uma estratégia simples ou complexa
	// Para fins de exemplo, vamos fazer o computador jogar aleatoriamente
	for (linha = 0; linha < 3; linha++) {
		for (coluna = 0; coluna < 3; coluna++) {
			if (tabuleiro[linha][coluna] == ' ') {
				tabuleiro[linha][coluna] = 'X';
				return 0;
			}
		}
	}
	return 0;
}
// Função para verificar se o tabuleiro está cheio (empate)
int VerificarEmpate() {
	int linha, coluna;
	for (linha = 0; linha < 3; linha++) {
		for (coluna = 0; coluna < 3; coluna++) {
			if (tabuleiro[linha][coluna] == ' ') {
				return 0; // O tabuleiro não está cheio
			}
		}
	}
	return 1; // O tabuleiro está cheio
}
// Função para verificar se o jogo terminou (vencedor ou empate)	
int VerificarFimDeJogo() {
	if (VerificarSeJogadavencedora('O')) {
		MostrarTabuleiro();
		printf("Você ganhou!\n");
		return 1;
	} else if (VerificarSeJogadavencedora('X')) {
		MostrarTabuleiro();
		printf("O Computador ganhou!\n");
		return 1;
	} else if (VerificarEmpate()) {
		MostrarTabuleiro();
		printf("Empate!\n");
		return 1;
	}
	return 0;

}
// Função para reiniciar o jogo
void ReiniciarJogo() {
	limparTabuleiro();
	printf("O jogo foi reiniciado!\n");
}

// Função principal
int main() {
	limparTabuleiro();
	int jogoAtivo = 1;
	while (jogoAtivo) {
		MostrarTabuleiro();
		int linha = PerguntarALinhaDoProximoPeao();
		int coluna = PerguntarAColunaDoProximoPeao();
		PorPeaoNoTabuleiro('O', linha, coluna);
		if (VerificarFimDeJogo()) {
			jogoAtivo = 0;
			break;
		}
		ComputadorJogar();
		if (VerificarFimDeJogo()) {
			jogoAtivo = 0;
			break;
		}
	}
	return 0;
}
