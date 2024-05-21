// Autor: Daniel Benjamin Perez Morales
// GitHub: https://github.com/DanielPerezMoralesDev13
// Correo electrónico: danielperezdev@proton.me
#include <stdio.h>

int main(void) {
    int i;

    // Ejemplo de bucle for con continue
    printf("Ejemplo de bucle for con continue:\n");
    for (i = 1; i <= 10; i++) {
        // Saltar la impresión cuando i es igual a 5
        if (i == 5) {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");

    // Ejemplo de bucle while con continue
    printf("\nEjemplo de bucle while con continue:\n");
    i = 1;
    while (i <= 10) {
        // Saltar la impresión cuando i es igual a 5
        if (i == 5) {
            i++;
            continue;
        }
        printf("%d ", i);
        i++;
    }
    printf("\n");

    return 0;
}
