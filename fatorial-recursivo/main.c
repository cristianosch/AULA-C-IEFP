#include <stdio.h>

//chamada recursiva, sempre a var * função (variavel - 1).
 

int fatorial(int n) {
    if (n == 0) {
        return 1;  // caso base
    } else {
        return n * fatorial(n - 1);  // chamada recursiva
    }
}

int main() {
    int num = 3;
    printf("Fatorial de %d = %d\n", num, fatorial(num));
    return 0;
}