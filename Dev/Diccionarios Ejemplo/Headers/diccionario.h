#ifndef DICCIONARIO_H
#include <stdbool.h>
#include <stdlib.h>

#define DICCIONARIO_H true

typedef struct Pareja Pareja;
typedef struct Diccionario Diccionario;

struct Pareja
{
    const char *llave;
    const char *valor;
};

struct Diccionario
{
    Pareja **parejas;
    int tamano;
};

inline Diccionario *diccionario_nuevo(void)
{
    Diccionario *D = (Diccionario *)malloc(1 * sizeof(Diccionario));
    D->parejas = NULL;
    D->tamano = 0;
}

inline void diccionario_agrega(Diccionario *D, const char *llave, const char *valor)
{
    diccionario_aumenta(D, 1);
    D->parejas[D->tamano - 1]->llave = llave;
    D->parejas[D->tamano - 1]->valor = valor;
}

void diccionario_muestra(const Diccionario *D);
void diccionario_aumenta(Diccionario **D, int unidades);
void diccionario_copia(const Diccionario *Do, const Diccionario *Dd, int unidades);
void diccionario_libera(Diccionario *D);

#endif