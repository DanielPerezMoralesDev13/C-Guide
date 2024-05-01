#include <stdio.h>

// Función para verificar si un valor existe en un array
int valor_existe(int *array, int tam, int valor);
int valor_existe(int *array, int tam, int valor) {
    for (int i = 0; i < tam; i++) {
        if (array[i] == valor) {
            return 1; // Retorna 1 si se encuentra el valor
        }
    }
    return 0; // Retorna 0 si no se encuentra el valor
}

int main(void) {
    int numeros[] = {10, 20, 30, 40, 50};
    int valor_buscar = 30;

    // Verificar si el valor existe en el array
    if (valor_existe(numeros, sizeof(numeros) / sizeof(numeros[0]), valor_buscar)) {
        printf("El valor %d existe en el array.\n", valor_buscar);
    } else {
        printf("El valor %d no existe en el array.\n", valor_buscar);
    }

    return 0;
}

