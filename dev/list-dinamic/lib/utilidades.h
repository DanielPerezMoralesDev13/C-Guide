#ifndef UTILIDADES
#define UTILIDADES true
#include <string.h>
#include <ctype.h>

extern void convertirMayusculas(char *texto);
extern void convertirMayusculas(char *texto){

    for (int i = 0; i < strlen(texto); i++){
        texto[i] = toupper(texto[i]);
    }
    return;
}

#endif