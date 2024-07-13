// Autor: Daniel Benjamin Perez Morales
// GitHub: https://github.com/DanielPerezMoralesDev13
// Correo electrónico: danielperezdev@proton.me
#include <stdio.h>

int main(void) {
    int numero;
    do {
        // Solicitar al usuario que ingrese un número
        printf("Por favor, ingrese un número (ingrese un número negativo para salir): ");
        scanf("%d", &numero);

        // Imprimir el número ingresado
        printf("Número ingresado: %d\n", numero);

    } while (numero >= 0); // Continuar el bucle mientras el número ingresado sea no negativo
    printf("Fin del programa.\n");
    return 0;
}
