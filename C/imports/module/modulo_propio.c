#ifndef MODULO_PROPIO 
#define MODULO_PROPIO 0
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *idValor(int *valor, const char *tipo) {
    char *result = (char *)malloc(100 * sizeof(char));
    sprintf(result, "id %s=%p es %p", tipo, valor, valor);
    return result;
}
#endif