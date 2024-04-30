#include <stdio.h>
#include <stdlib.h>

// Función de comparación para qsort
int comparar_enteros(const void *a, const void *b) {
    // Convertir los parámetros void* a enteros
    int int_a = *((int *)a);
    int int_b = *((int *)b);
    
    // Realizar la comparación
    if (int_a < int_b) return -1;
    if (int_a > int_b) return 1;
    return 0;
}

int main() {
    // Arreglo de enteros desordenados
    int arreglo[] = {5, 2, 8, 3, 1};

    // Tamaño del arreglo
    int tamano = sizeof(arreglo) / sizeof(arreglo[0]);

    // Ordenar el arreglo utilizando qsort
    qsort(arreglo, tamano, sizeof(int), comparar_enteros);

    // Imprimir el arreglo ordenado
    printf("Arreglo ordenado:\n");
    for (int i = 0; i < tamano; i++) {
        printf("%d ", arreglo[i]);
    }
    printf("\n");

    return 0;
}
