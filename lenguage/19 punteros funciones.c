#include <stdio.h>

// Función que suma dos enteros
int sumar(int a, int b);
int sumar(int a, int b) {
    return a + b;
}

// Función que resta dos enteros
int restar(int a, int b);
int restar(int a, int b) {
    return a - b;
}

int main(void) {
    // Declaración de un puntero a función que toma dos enteros como argumentos y devuelve un entero
    int (*ptr_funcion)(int, int);

    // Asignar la dirección de la función 'sumar' al puntero a función
    ptr_funcion = &sumar;

    // Utilizar el puntero a función para llamar a la función 'sumar'
    int resultado_suma = (*ptr_funcion)(5, 3);
    printf("Resultado de la suma: %d\n", resultado_suma);

    // Asignar la dirección de la función 'restar' al puntero a función
    ptr_funcion = &restar;

    // Utilizar el puntero a función para llamar a la función 'restar'
    int resultado_resta = (*ptr_funcion)(5, 3);
    printf("Resultado de la resta: %d\n", resultado_resta);

    return 0;
}
