#ifndef MODULO_FUNCIONES
#define MODULO_FUNCIONES 0
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *idValor(void *valor, const char *tipo) {
    char *resultado = (char *)malloc(100 * sizeof(char));
    if (resultado == NULL) {
        printf("Error: No se pudo asignar memoria\n");
        exit(1);
    }
    sprintf(resultado, "id %s=%p es %p", tipo, valor, valor);
    return resultado;
}
#endif