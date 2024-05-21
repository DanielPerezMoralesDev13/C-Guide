// Autor: Daniel Benjamin Perez Morales
// GitHub: https://github.com/DanielPerezMoralesDev13
// Correo electrónico: danielperezdev@proton.me
#include <stdio.h>

// Definición de constantes con macros
#define PI 3.14
#define SUMA(x,y) ((x) + (y)) // Agregado de paréntesis adicionales para evitar posibles problemas de precedencia
#define BIEN return 0
#define ERROR return 1

int main(int argc, char *argv[]) {
    // Uso de la macro SUMA para realizar una suma
    printf("Suma: %d\n", SUMA(10, 10));

    // Uso de macros de condición
    #ifndef NOMBRE
    printf("No tienes nombre\n");
    #endif

    // Comprobación de si la constante PI está definida
    #ifdef PI
    printf("PI está definido: %.2f\n", PI);
    #else
    printf("PI no está definido\n");
    #endif

    // Eliminar la definición de la constante PI y la macro SUMA
    #undef PI
    #undef SUMA

    // Retorno exitoso del programa
    BIEN;

    // Nota: Se ha eliminado la parte de código condicional al final debido a que no estaba relacionada con el tema de las macros

    return 0;
}
