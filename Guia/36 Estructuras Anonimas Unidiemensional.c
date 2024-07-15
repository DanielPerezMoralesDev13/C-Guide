// Autor: Daniel Benjamin Perez Morales
// GitHub: https://github.com/DanielPerezMoralesDev13
// Correo electrónico: danielperezdev@proton.me
#include <stdio.h>

struct {
    int unidimensional[10];
    int bidimensional[5][10];
} anonima[3];

int main(void) {
    // Asignación de valores a los arreglos unidimensionales
    for (int i = 0; i < 10; i++) {
        anonima[0].unidimensional[i] = i;
        anonima[1].unidimensional[i] = i * 2;
        anonima[2].unidimensional[i] = i * 3;
    }

    // Asignación de valores a los arreglos bidimensionales
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            anonima[0].bidimensional[i][j] = i * j;
            anonima[1].bidimensional[i][j] = i + j;
            anonima[2].bidimensional[i][j] = i - j;
        }
    }

    // Imprimir los valores del arreglo unidimensional de la primera estructura anónima
    printf("Unidimensional (Estructura 1):\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", anonima[0].unidimensional[i]);
    }
    printf("\n");

    // Imprimir los valores del arreglo bidimensional de la segunda estructura anónima
    printf("Bidimensional (Estructura 2):\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", anonima[1].bidimensional[i][j]);
        }
        printf("\n");
    }

    // Imprimir los valores del arreglo bidimensional de la tercera estructura anónima
    printf("Bidimensional (Estructura 3):\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", anonima[2].bidimensional[i][j]);
        }
        printf("\n");
    }

    return 0;
}
