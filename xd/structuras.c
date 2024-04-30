#include <stdio.h>

struct fecha{
    unsigned int dia,mes,año;
};

struct fecha crearFecha(unsigned int,unsigned int,unsigned int);

struct fecha crearFecha(unsigned int dia,unsigned int mes,unsigned int año){
    // struct fecha f = {dia,mes,año};
    return (struct fecha) {dia,mes,año};
    // f = (struct fecha) {dia,mes,año};

    // f.dia = 13;
    // f.mes = 12;
    // f.año = 2005;
    // return f;
}


int main(){
    struct fecha f = crearFecha(13,12,2005);
    // f.dia = 13;
    // f.mes = 12;
    // f.año = 2005;
    printf("%d/%d/%d\n",f.dia,f.mes,f.año);
    return 0;
}


