// Autor: Daniel Benjamin Perez Morales
// GitHub: https://github.com/DanielPerezMoralesDev13
// Correo electrónico: danielperezdev@proton.me
#include <stdio.h>
#include <stdlib.h>

int *crearArreglo(int tamano);
int *crearArreglo(int tamano) {
    // Asignar memoria para un arreglo de tamaño tamano
    int *arreglo = (int *)malloc(tamano * sizeof(int));
    if (arreglo == NULL) {
        printf("Error: No se pudo asignar memoria para el arreglo.\n");
        exit(1); // Salir del programa si no se pudo asignar memoria
    }

    // Inicializar el arreglo con valores consecutivos
    for (int i = 0; i < tamano; i++) {
        arreglo[i] = i + 1;
    }

    // Devolver el puntero al arreglo
    return arreglo;
}

int main(void) {
    int tamano = 5;
    int *miArreglo;

    // Llamar a la función para crear el arreglo
    miArreglo = crearArreglo(tamano);

    // Imprimir los valores del arreglo
    printf("Arreglo devuelto por la función:\n");
    for (int i = 0; i < tamano; i++) {
        printf("%d ", miArreglo[i]);
    }
    printf("\n");

    // Liberar la memoria asignada para el arreglo
    free(miArreglo);

    return 0;
}
