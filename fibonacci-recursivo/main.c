#include <stdio.h>

// Função recursiva para calcular o n-ésimo número de Fibonacci
int fibonacci(int n) {
    if (n == 0) {
        return 0;  // caso base 1
    } else if (n == 1) {
        return 1;  // caso base 2
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);  // chamada recursiva
    }
}

int main() {
    int termos = 10;

    printf("Sequência de Fibonacci com %d termos:\n", termos);
    for (int i = 0; i < termos; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");

    return 0;
}
