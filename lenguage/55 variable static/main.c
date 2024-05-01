#include <stdio.h>

void funcion(void);
void funcion(void) {
    // Variable estática local
    static int contador = 0;
    
    // Incrementa el contador
    contador++;
    
    printf("El valor del contador es: %d\n", contador);
    return;
}

int main(void) {
    // Llama a la función varias veces
    funcion();
    funcion();
    funcion();

    // dara error por que la variable_static solo existe en static.c descomentar para verificar
    
    // printf("variable_static -> %d \n", variable_static);
    
    return 0;
}
