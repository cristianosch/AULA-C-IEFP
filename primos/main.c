#include <stdio.h>
#include <math.h>

// Função que retorna 1 se for primo, 0 se não for
int eh_primo(int n) {
    if (n < 2) return 0;           // Números menores que 2 não são primos
    if (n == 2 || n == 3) return 1; // 2 e 3 são primos
    if (n % 2 == 0 || n % 3 == 0) return 0; // Elimina múltiplos de 2 e 3

    // Testa de 5 até a raiz quadrada de n, pulando de 2 em 2
    for (int i = 5; i <= sqrt(n); i += 2) {
        if (n % i == 0) return 0;
    }
    return 1; // Se não achou nenhum divisor, é primo
}

int main() {
    int numero;
    printf("Digite um número para verificar se é primo: ");
    scanf("%d", &numero);

    if (eh_primo(numero)) {
        printf("O número %d é primo!\n", numero);
    } else {
        printf("O número %d não é primo.\n", numero);
    }

    return 0;
}