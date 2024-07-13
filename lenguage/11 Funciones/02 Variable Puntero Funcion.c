#include <stdio.h>

// Definición de la función sumarDosNumeros
int sumarDosNumeros(int x, int y) {
    return x + y;
}

int main() {
    int (*puntero_suma)(int, int); // Declaración de un puntero a una función

    puntero_suma = &sumarDosNumeros; // Asignación del puntero a la dirección de la función

    // Invocación de la función a través del puntero
    int resultado = (*puntero_suma)(3, 5);
    printf("Resultado: %d\n", resultado);

    return 0;
}
