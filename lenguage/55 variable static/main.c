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

int main() {
    // Llama a la función varias veces
    funcion();
    funcion();
    funcion();
    
    return 0;
}
