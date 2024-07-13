// Autor: Daniel Benjamin Perez Morales
// GitHub: https://github.com/DanielPerezMoralesDev13
// Correo electrónico: danielperezdev@proton.me
#include <stdio.h>

int main(void) {
    int entero = 10;
    float flotante = 3.14;
    char caracter = 'A';

    // Declaración de puntero void
    void *ptr;

    // Asignación de direcciones de memoria a punteros void
    ptr = &entero;
    printf("Valor de entero: %d\n", *(int *)ptr); // Casting a int* para dereferenciar

    ptr = &flotante;
    printf("Valor de flotante: %.2f\n", *(float *)ptr); // Casting a float* para dereferenciar

    ptr = &caracter;
    printf("Valor de caracter: %c\n", *(char *)ptr); // Casting a char* para dereferenciar

    return 0;
}
