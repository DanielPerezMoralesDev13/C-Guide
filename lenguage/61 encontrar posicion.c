#include <stdio.h>

// Función para encontrar la posición de un valor en un array
int encontrar_posicion(int *array, int tam, int valor);
int encontrar_posicion(int *array, int tam, int valor) {
    for (int i = 0; i < tam; i++) {
        if (array[i] == valor) {
            return i; // Retorna la posición si se encuentra el valor
        }
    }
    return -1; // Retorna -1 si no se encuentra el valor
}

int main(void) {
    int numeros[] = {10, 20, 30, 40, 50};
    int valor_buscar = 30;

    // Encontrar la posición del valor en el array
    int posicion = encontrar_posicion(numeros, sizeof(numeros) / sizeof(numeros[0]), valor_buscar);

    // Verificar si se encontró el valor y mostrar la posición
    if (posicion != -1) {
        printf("El valor %d se encuentra en la posición %d del array.\n", valor_buscar, posicion);
    } else {
        printf("El valor %d no se encuentra en el array.\n", valor_buscar);
    }

    return 0;
}
