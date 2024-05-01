#include <stdio.h>

int main() {
    int numero = 15;
    char *mensaje = (numero % 2 == 0) ? "Es par" : "Es impar";

    printf("%s\n", mensaje);

    return 0;
}
