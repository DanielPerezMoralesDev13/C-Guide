#ifndef LIB
#include "../lib/color.h"
#include "../lib/utilidades.h"

#define LIB true


// Declaración de la estructura ListaInt
struct ListaInt {
    long int longitud;
    long double *arreglo;
};



// Definición de un alias "List" para "struct ListaInt"
typedef struct ListaInt List;



extern void añadirItem(List *lista, const int item);
extern void eliminarItemValor(List *lista, int item);
extern void eliminarItemIndice(List *lista, const int indice);
extern void imprimirListaInt(const List *lista);
extern List *crearListaInt(void);
extern void liberarListInt(List *lista);

extern void eliminarItemIndice(List *lista, const int indice){
    if (indice > lista->longitud){
        printf("\033[0;31m\033[1mindexError:\033[0m El índice [%d] está fuera de rango. La longitud de la lista es de -> len = %ld\n", indice, lista->longitud);
        exit(1);

    } 
    return;
}
extern void liberarListInt(List *lista){
    free(lista->arreglo);
    free(lista);
    return;
}


extern void añadirItem(List *lista, const int item){

    long double *array = (long double* )malloc(lista->longitud + 1 * sizeof(double));

    // printf("valor longitud = %ld\n",lista->longitud);
    for (int i = 0; i < lista->longitud; i++){
        array[i] = lista->arreglo[i];
    }
    // printf("valor item = %d\n",item);


    array[lista->longitud] = item;
    lista->longitud++;

    free(lista->arreglo);
    lista->arreglo = array;
    return;
}


extern void imprimirListaInt(const List *lista){
    for (int i = 0; i < lista->longitud; i++){
        printf("%Lf\n",lista->arreglo[i]);
    }
    return;
}


extern List *crearListaInt(void){
    List *l = (List *)malloc(1 * sizeof(List));
    l->longitud = 0;
    l->arreglo = NULL;
    return l;
}


#endif