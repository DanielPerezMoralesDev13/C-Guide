#include <stdio.h>

int main(void) {
    int puntaje = 85;
    char calificacion;

    calificacion = (puntaje >= 90) ? 'A' :
                   (puntaje >= 80) ? 'B' :
                   (puntaje >= 70) ? 'C' : 'D';

    printf("La calificación es: %c\n", calificacion);

    return 0;
}
