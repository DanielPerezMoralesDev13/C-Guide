#include "lib/lib.h"

// int argc,char *argv[]
int main(void){
    saludar();
    // printf("El tamaño de int es: %zu bytes\n", sizeof(int));
    // printf("El tamaño de char es: %zu bytes\n", sizeof(char));
    // printf("El tamaño de float es: %zu bytes\n", sizeof(float));
    // printf("El tamaño de double es: %zu bytes\n", sizeof(double));
    // printf("El tamaño de long es: %zu bytes\n", sizeof(long));
    // printf("El tamaño de short es: %zu bytes\n", sizeof(short));
    // printf("El tamaño de long long es: %zu bytes\n", sizeof(long long));

    return 0;
}

// gcc -Wall -Wextra -Werror -o ./fichero ./fichero.c ./lib/lib.h 
// Para habilitar todos los warnings y errores en GCC, puedes usar las siguientes opciones de compilación:

//     -Wall: Habilita la mayoría de los warnings.
//     -Wextra: Habilita algunos warnings adicionales no cubiertos por -Wall.
//     -Werror: Trata todos los warnings como errores.

// Puedes combinar estas opciones al compilar tus programas para obtener una mayor cantidad de información sobre posibles problemas en tu código.