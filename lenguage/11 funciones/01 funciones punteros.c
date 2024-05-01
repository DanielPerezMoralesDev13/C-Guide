#include <stdio.h>
#include <stdlib.h>

// Función para sumar dos números y devolver el resultado como un puntero
int *sumar(int x, int y) {
    int *resultado = (int*)malloc(sizeof(int)); // Se asigna memoria para el resultado
    if (resultado == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        exit(1);
    }
    *resultado = x + y; // Se calcula la suma y se almacena en la memoria asignada
    return resultado; // Se devuelve el puntero al resultado
}

int main() {
    int a = 5, b = 3;
    int *puntero_resultado;

    // Llamada a la función sumar y almacenamiento del puntero al resultado
    puntero_resultado = sumar(a, b);

    // Impresión del resultado
    printf("La suma de %d y %d es: %d\n", a, b, *puntero_resultado);

    // Liberación de la memoria asignada
    free(puntero_resultado);

    return 0;
}
