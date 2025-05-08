// Criar um vector global (declarado acima do main() ), chamado vectorzinho, que irá receber os 5 valores:
// 4) Criar um rotina, chamada pedirValores(), que irá preencher os valores do vector com base no input do utilizador
// Criar uma rotina, chamada MostrarVectorzinho() que irá mostrar os 5 valores do vector, através de um ciclo for
// Utilizar as 3 rotinas criadas nos passos anteriores para a) limpar o vector b) preencher o vector c) mostrar o conteúdo do vector
// Criar um ciclo for que irá percorrer cada um dos elementos do vector (excepto o último) e invertê-lo com o elemento seguinte caso seja maior:

#include <stdio.h>

#define TAMANHO 5
int vectorzinho[TAMANHO];

void LimpaVectorzinho() {
	int contador;
	for (contador = 0; contador < TAMANHO; contador ++){
		vectorzinho[contador] = 0;
	}
}

void PedirValores() {
	int contador;
	for (contador = 0; contador < TAMANHO; contador ++) {
		printf("Digite o valor: ");
		scanf("%d", &vectorzinho[contador]);
	}
}

void MostrarVectorzinho() {
	int contador;
	for (contador = 0; contador < TAMANHO; contador ++){
		printf("Os valores do vetor são: %d\n", vectorzinho[contador]);
	}
	printf("\n");
}

// Ordenação de menor para maior
void TrocaSeMaior() {
	int i;
	for (i = 0; i < (TAMANHO -1); i++){ // exceto o último
		int provisorio;
		if (vectorzinho[i+1] < vectorzinho[i])
		{
			provisorio = vectorzinho[i];
			vectorzinho[i] = vectorzinho[i + 1];
			vectorzinho[i + 1] = provisorio;
		}
	}
}

// Ordenação de maior para menor
void TrocaSeMenor() {
	for (int i = TAMANHO -1; i >= 0; i--){
		printf("%d ", vectorzinho[i]);
	}
	printf("\n");
}


int main(){
	LimpaVectorzinho();
	PedirValores();
	printf("Antes da Troca: \n");
	MostrarVectorzinho();

	for (int j = 0; j < TAMANHO; j++){		
		TrocaSeMaior();
	}	

	printf("Ordenado do menor para o maior:\n");
	MostrarVectorzinho();

	printf("Ordenado do maior para o menor:\n");
	TrocaSeMenor();

	return 0;
}
