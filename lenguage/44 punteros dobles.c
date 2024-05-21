// Autor: Daniel Benjamin Perez Morales
// GitHub: https://github.com/DanielPerezMoralesDev13
// Correo electrónico: danielperezdev@proton.me
#include <stdio.h>

int main(void) {
    int numero = 42;
    int *puntero1; // Puntero a un entero
    int **puntero2; // Puntero a un puntero a un entero

    puntero1 = &numero; // Asignamos la dirección de memoria de 'numero' al puntero1
    puntero2 = &puntero1; // Asignamos la dirección de memoria de 'puntero1' al puntero2

    // Imprimimos los valores
    printf("Valor de 'numero': %d\n", numero);
    printf("Valor de '*puntero1': %d\n", *puntero1); // Imprimimos el valor al que apunta puntero1
    printf("Valor de '**puntero2': %d\n", **puntero2); // Imprimimos el valor al que apunta puntero2 (que a su vez apunta a numero)

    // Imprimimos las direcciones de memoria
    printf("Dirección de memoria de 'numero': %p\n", (void *)&numero);
    printf("Dirección de memoria de 'puntero1': %p\n", (void *)puntero1);
    printf("Dirección de memoria de 'puntero2': %p\n", (void *)puntero2);

    return 0;
}
