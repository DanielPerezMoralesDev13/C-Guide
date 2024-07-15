// Autor: Daniel Benjamin Perez Morales
// GitHub: https://github.com/DanielPerezMoralesDev13
// Correo electrónico: danielperezdev@proton.me
#include <stdio.h>

int main(void) {
    int entero;
    char caracter;
    float flotante;
    double doble;
    int arreglo[10];
    char cadena[] = "Hola";

    printf("Tamaño de un entero: %zu bytes\n", sizeof(entero));
    printf("Tamaño de un caracter: %zu bytes\n", sizeof(caracter));
    printf("Tamaño de un flotante: %zu bytes\n", sizeof(flotante));
    printf("Tamaño de un double: %zu bytes\n", sizeof(doble));
    printf("Tamaño de un arreglo de enteros (10 elementos): %zu bytes\n", sizeof(arreglo));
    printf("Tamaño de una cadena de caracteres (incluyendo el carácter nulo): %zu bytes\n", sizeof(cadena));

    return 0;
}
