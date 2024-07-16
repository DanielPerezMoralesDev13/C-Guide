#ifndef LIB
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#define LIB true

// Definición de tipo Persona
typedef struct
{
    const char *key;
    const char *value;

} Persona;

// Definición de tipo Diccionario
typedef struct
{
    Persona **persona;
    int tamaño;
} Diccionario;

inline extern Diccionario *crear_diccionario(void);
void agregar_key_diccionario(Diccionario *D, const char *key, const char *value);
void imprimir_items(const Diccionario *D);


#endif