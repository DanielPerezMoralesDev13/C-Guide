// Autor: Daniel Benjamin Perez Morales
// GitHub: https://github.com/DanielPerezMoralesDev13
// Correo electrónico: danielperezdev@proton.me
#include <stdio.h>
#include <assert.h>

int main(void) {
    int x = 5;
    int y = 10;

    // Asegurarse de que x sea igual a 5
    assert(x == 5);

    // Asegurarse de que y sea menor que 10 (esto fallará)
    assert(y < 10);

    printf("Todo está bien\n");

    return 0;
}
