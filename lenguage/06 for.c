#include <stdio.h>

int main() {
    int lista[] = {10, 20, 30, 40, 50};
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6}, 
        {7, 8, 9}
    };

    // Imprimir los elementos de la lista unidimensional
    printf("Elementos de la lista unidimensional:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", lista[i]);
    }
    printf("\n");

    // Imprimir los elementos de la lista bidimensional
    printf("Elementos de la lista bidimensional:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
