#include "../Headers/diccionario.h"
#include <stdlib.h>
#include <stdio.h>

void diccionario_muestra(const Diccionario *D)
{
    for (int i = 0; i < D->tamano; i++)
    {
        printf("%s: %s\n", D->parejas[i]->llave, D->parejas[i]->valor);
    }
}
void diccionario_aumenta(Diccionario **D, int unidades)
{
    Diccionario *E = diccionario_nuevo();
    E->tamano = (**D).tamano;

    E->parejas = (Pareja **)calloc(E->tamano, sizeof(Pareja));
}
void diccionario_copia(const Diccionario *Do, const Diccionario *Dd, int unidades)
{
    for (int i = 0; i < unidades; i++)
    {
        Dd->parejas[i]->llave = Do->parejas[i]->llave;
        Dd->parejas[i]->valor = Do->parejas[i]->valor;

    }
    
}
void diccionario_libera(Diccionario *D)
{
    for (int i; i < D->tamano; i++)
    {
        free(D->parejas[i]);
    }
    free(D->parejas);
    free(D);
}
