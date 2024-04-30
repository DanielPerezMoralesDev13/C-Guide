#include <stdio.h>

int main() {
    int i;

    // Ejemplo de bucle for con break
    printf("Ejemplo de bucle for con break:\n");
    for (i = 1; i <= 10; i++) {
        printf("%d ", i);
        if (i == 5) {
            // Cuando i llega a 5, salir del bucle
            break;
        }
    }
    printf("\n");

    // Ejemplo de bucle while con break
    printf("\nEjemplo de bucle while con break:\n");
    i = 1;
    while (i <= 10) {
        printf("%d ", i);
        if (i == 5) {
            // Cuando i llega a 5, salir del bucle
            break;
        }
        i++;
    }
    printf("\n");

    return 0;
}
