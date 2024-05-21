#include "../lib/lib.h"


#define CODE_EXITOSO return 0
#define CODE_NO_EXITOSO return 1

int main(void){
    List *lista = crearListaInt();
    
    if (lista == NULL){
        perror("List *lista = crearListaInt(); -> Error al asignar la memoria");
        CODE_NO_EXITOSO;
    }
    for (int i = 0; i < 10; i++) {
        añadirItem(lista,i);   
    }
    imprimirListaInt(lista);
    eliminarItemValor(lista,2);
    imprimirListaInt(lista);
    liberarListInt(lista);
    CODE_EXITOSO;
}