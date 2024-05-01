#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Función para generar un número aleatorio en un rango específico [min, max]
int randomConRango(int min, int max);
int randomConRango(int min, int max) {
    return min + rand() % (max - min + 1);
}

// Función para generar un número aleatorio sin un rango específico
int randomSinRango(void);
int randomSinRango(void) {
    return rand();
}

int main(void) {
    // Semilla para la función de generación de números aleatorios
    srand(time(NULL));

    // Generar y mostrar un número aleatorio en el rango [10, 20]
    printf("Número aleatorio en el rango [10, 20]: %d\n", randomConRango(10, 20));

    // Generar y mostrar un número aleatorio sin un rango específico
    printf("Número aleatorio sin rango específico: %d\n", randomSinRango());

    return 0;
}
