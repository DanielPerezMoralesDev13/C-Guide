// Autor: Daniel Benjamin Perez Morales
// GitHub: https://github.com/DanielPerezMoralesDev13
// Correo electrónico: danielperezdev@proton.me
#include <stdio.h>

int main(void) {
    // Declaración de variables
    int num = 10;
    int *ptr_num; // Declaración de un puntero a un entero

    // Asignación de la dirección de memoria de 'num' al puntero
    ptr_num = &num;

    // Imprimir el valor de 'num' y la dirección de memoria almacenada en el puntero
    printf("Valor de num: %d\n", num);
    printf("Dirección de memoria de num: %p\n", &num);
    printf("Valor almacenado en el puntero: %d\n", *ptr_num);
    printf("Dirección de memoria almacenada en el puntero: %p\n", ptr_num);

    // Modificar el valor de 'num' a través del puntero
    *ptr_num = 20;
    printf("Nuevo valor de num: %d\n", num);

    // Declaración e inicialización de un puntero nulo
    int *ptr_nulo = NULL;

    // Comprobación de si un puntero es nulo
    if (ptr_nulo == NULL) {
        printf("El puntero es nulo.\n");
    } else {
        printf("El puntero no es nulo.\n");
    }

    // Arreglo de enteros y puntero a la primera posición del arreglo
    int arreglo[] = {1, 2, 3, 4, 5};
    int *ptr_arreglo = arreglo;

    // Acceso a los elementos del arreglo a través del puntero
    printf("Elementos del arreglo accedidos a través del puntero:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: %d\n", i + 1, *(ptr_arreglo + i));
    }

    return 0;
}
