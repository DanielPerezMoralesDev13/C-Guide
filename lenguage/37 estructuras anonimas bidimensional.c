#include <stdio.h>

struct {
    int datos[10];
} anonima[3][10];

int main() {
    // Asignación de valores a los arreglos dentro de la estructura anónima
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 10; j++) {
            anonima[i][j].datos[j] = i * j;
        }
    }

    // Imprimir los valores de los arreglos dentro de la estructura anónima
    for (int i = 0; i < 3; i++) {
        printf("Estructura %d:\n", i+1);
        for (int j = 0; j < 10; j++) {
            printf("%d ", anonima[i][j].datos[j]);
        }
        printf("\n");
    }

    return 0;
}
