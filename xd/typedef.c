#include <stdio.h>

// typedef <tipo a renombrar> <nombre nuevo>
typedef long int precio;
struct fecha{
    unsigned int dia;
    unsigned int mes;
    unsigned int año;
};

typedef struct fecha Fecha;
int main(int argc,char *argv[]){
    // precio recomendado = 80 ,mayorista = 50,minorista = 90;
    // printf("precio mayorista -> %ld",mayorista);
    Fecha f = {13,12,2005};
    printf("fecha -> %d/%d/%d\n",f.dia,f.mes,f.año);
    return 0;
}