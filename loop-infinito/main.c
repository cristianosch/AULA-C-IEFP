// # Formas de looping infinito

#include <stdio.h>

int main() {
	// Exemplo 1
	
    while (1) {
        printf("Loop infinito!\n");
    }
		
	// Exemplo 2
	for (;;) {
		printf("Loop infinito com for!\n");
	}
	// Exemplo 3
	do {
		printf("Loop infinito com do...while!\n");
	} while (1);
	
	
    return 0;
}
