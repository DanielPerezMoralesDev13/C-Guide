#include <stdio.h>

// Definición de la unión
union MiUnion {
    int entero;
    float flotante;
    char caracter;
};

int main() {
    union MiUnion miUnion;

    // Asignación de valores a la unión
    miUnion.entero = 10;
    printf("Valor entero: %d\n", miUnion.entero);

    miUnion.flotante = 3.14;
    printf("Valor flotante: %.2f\n", miUnion.flotante);

    miUnion.caracter = 'A';
    printf("Valor caracter: %c\n", miUnion.caracter);

    // Imprimir el tamaño de la unión
    printf("Tamaño de la unión: %lu bytes\n", sizeof(union MiUnion));

    return 0;
}
