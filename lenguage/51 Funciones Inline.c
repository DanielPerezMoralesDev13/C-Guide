// Autor: Daniel Benjamin Perez Morales
// GitHub: https://github.com/DanielPerezMoralesDev13
// Correo electrónico: danielperezdev@proton.me
#include <stdio.h>

// Declaración de la función inline
inline int suma(int a, int b);
inline int suma(int a, int b) {
    return a + b;
}

int main(void) {
    int x = 10, y = 20;
    int resultado;

    // Llamada a la función inline
    resultado = suma(x, y);

    printf("La suma de %d y %d es %d\n", x, y, resultado);

    return 0;
}
