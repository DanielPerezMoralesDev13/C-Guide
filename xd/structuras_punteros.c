#include <stdio.h>

// parametros por valor
// parametros por referencia

struct fecha{
    unsigned int dia,mes,año;
};

struct fecha crearFecha(unsigned int,unsigned int,unsigned int);

// void fecha_print(struct fecha *f);
void fecha_print(struct fecha *f);
void fecha_incrementar(struct fecha* f);



int main(int argc,char* argv[]){
    // struct fecha f = {13,12,05};
    struct fecha f = crearFecha(30,12,2005);
    fecha_print(&f);
    fecha_incrementar(&f);
    fecha_print(&f);
    
    // f.dia = 13;
    // f.mes = 12;
    // f.año = 2005;
    // printf("%d/%d/%d\n",f.dia,f.mes,f.año);
    return 0;
}

struct fecha crearFecha(unsigned int dia,unsigned int mes,unsigned int año){
    // struct fecha f = {dia,mes,año};
    return (struct fecha) {dia,mes,año};
    // f = (struct fecha) {dia,mes,año};

    // f.dia = 13;
    // f.mes = 12;
    // f.año = 2005;
    // return f;
}

void fecha_print(struct fecha* f){
    // printf("%d/%d/%d\n",f.dia,f.mes,f.año); dara error por que f contiene la direccion a memoria del puntero

    printf("%d/%d/%d\n",f->dia,f->mes,f->año);
    return;
}

void fecha_incrementar(struct fecha* f){
    f->dia++;
    if (f->dia > 30){
        f->dia = 1;
        f->mes++;
    }if (f->mes > 12){
            f->mes = 1;
            f->año++;
    }
    return;
}