#include <stdio.h>
#include <string.h>
#include <locale.h>

#define QTD 3

int main() 
{
    setlocale(LC_ALL, "");
    char listaNomes[QTD][20];
    int i, j;

    // Ler 3 nomes completos 
    for(i = 0; i < QTD; i++) {
        printf("Digite o nome completo da pessoa %d: ", i + 1);
		scanf(" %[^\n]", listaNomes[i]);   

        // Remove a quebra de linha do final da string
        listaNomes[i][strcspn(listaNomes[i], "\n")] = '\0';
    }

    printf("\nNomes digitados:\n");

    for(i = 0; i < QTD; i++) {
        printf("%s\n", listaNomes[i]);

        for(j = 0; j < strlen(listaNomes[i]); j++) {
            printf("%c |", listaNomes[i][j]);
        }
        printf("\n----------------------------------\n");
    }

    return 0;
}
