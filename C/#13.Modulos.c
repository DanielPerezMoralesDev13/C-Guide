#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "modulo.h"

// En C, no hay una forma directa de representar constantes como PI.
#define PI_VALUE M_PI

int main(void) {
    // Llamadas a funciones desde el módulo "modulo.c"
    sumarValores(5, 3, 1);
    imprimirValor("Hola Python!");

    sumarValores(5, (int)3.2, 11);
    imprimirValor("Rust");

    // El valor de PI desde la biblioteca math.h
    printf("%f\n", PI_VALUE);

    int edad = 18;

    // Llamadas a funciones del módulo propio
    idValor(&edad,(void *)&edad);

    return 0;
}