#include <stdio.h>

typedef struct expediente Expediente;

struct expediente{
    char nombre[20];
    char apellido[20];
    short telefono;
    double nota;
};

// todo -> continuacion

void escribirFichero(void){
    Expediente a = {"daniel","perez",77889650,100.00};
    Expediente b = {"daniel","perez",77889650,100.00};
    Expediente c = {"daniel","perez",77889650,100.00};

    return;
}
// int argc,char *argv[]
int main(void){
    escribirFichero();
    return 0;
}