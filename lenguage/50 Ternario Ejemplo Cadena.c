// Autor: Daniel Benjamin Perez Morales
// GitHub: https://github.com/DanielPerezMoralesDev13
// Correo electrónico: danielperezdev@proton.me
#include <stdio.h>

int main(void) {
    int numero = 15;
    char *mensaje = (numero % 2 == 0) ? "Es par" : "Es impar";

    printf("%s\n", mensaje);

    return 0;
}
