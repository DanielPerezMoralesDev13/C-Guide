#include <stdio.h>

int main(void){
    unsigned int variable = 5;
    unsigned int *puntero = &variable;
    // el formato %p es para imprimir la direccion a memoria y si la variable no tiene asignada un puntero se le pone &
    printf("Puntero -> %p.  variable -> %p\n", puntero,&variable);
    // para desferencia el punter al valor real se pone *
    variable++;
    printf("Puntero -> %d.  variable -> %d\n", *puntero,variable);
    *puntero = 10;
    printf("Puntero -> %d.  variable -> %d\n", *puntero,variable);
    return 0;
}