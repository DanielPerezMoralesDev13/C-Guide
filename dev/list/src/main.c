#include <stdio.h>
#include <stdlib.h>
#include "../lib/lib.h"


#define CODE_EXITOSO return 0
#define CODE_NO_EXITOSO return 1

int main(void){
    List *lista = crearListaInt();
    
    if (lista == NULL){
        perror("List *lista = crearListaInt(); -> Error al asignar la memoria");
        CODE_NO_EXITOSO;
    }
    eliminarItemIndice(lista,10);
    añadirItem(lista,10);
    
    imprimirListaInt(lista);
    imprimirListaInt(lista);

    free(lista);
    CODE_EXITOSO;
}