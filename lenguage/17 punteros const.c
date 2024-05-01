#include <stdio.h>

int main(void) {
    int num = 10;
    const int *ptr; // Puntero a un entero constante

    ptr = &num;
    // *ptr = 20; // Esto dará un error, ya que no se puede modificar el valor a través del puntero
    printf("Valor de num: %d\n", *ptr);

    return 0;
}
