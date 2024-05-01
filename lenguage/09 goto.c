#include <stdio.h>

int main(void) {
    // Declaración e inicialización de la variable de iteración
    int i = 1;

inicio: // Etiqueta de destino del goto

    // Imprime el número de iteración actual
    printf("Iteración %d\n", i);

    // Incrementa el contador de iteración
    i++;

    // Comprueba si se han completado todas las iteraciones
    if (i <= 5) {
        goto inicio; // Salta de nuevo al inicio del bucle
    }

    // Indica el fin del programa
    printf("Fin del programa\n");

    // Retorna 0 para indicar una ejecución exitosa del programa
    return 0;
}
