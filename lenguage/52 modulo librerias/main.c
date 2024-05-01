// main.c

#include <stdio.h>
#include "./lib.h"

int main(void) {
    int a = 10, b = 5;
    int resultado_suma = suma(a, b);
    int resultado_resta = resta(a, b);

    printf("La suma de %d y %d es: %d\n", a, b, resultado_suma);
    printf("La resta de %d y %d es: %d\n", a, b, resultado_resta);

    return 0;
}
