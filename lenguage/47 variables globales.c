#include <stdio.h>

// Variable global
int global_variable = 10;

// Función que usa la variable global
void funcion(void);
void funcion(void) {
    printf("Valor de global_variable dentro de la función: %d\n", global_variable);
    return;
}

int main() {
    // Acceso y modificación de la variable global
    printf("Valor de global_variable en el main antes de modificar: %d\n", global_variable);
    global_variable = 20;
    printf("Valor de global_variable en el main después de modificar: %d\n", global_variable);

    // Llamada a la función que utiliza la variable global
    funcion();

    return 0;
}
