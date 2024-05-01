#include <stdio.h>
#include <stdlib.h>
#include "../lib/lib.h"

#define CODE_EXITOSO return 0
#define CODE_NO_EXITOSO return 1

int main(void){
    List *l = (List *)malloc(2 * sizeof(List));
    
    if (l == NULL){
        perror("Error al asignar la memoria");
        CODE_NO_EXITOSO;
    }
    
   
    free(l);
    CODE_EXITOSO;
}