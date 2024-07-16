#include "../Headers/diccionario.h"

int main(void){
    Diccionario *D = diccionario_nuevo();
    diccionario_agrega(D, "Nombre", "Daniel");
    diccionario_agrega(D, "Apellido", "Perez");
    diccionario_agrega(D, "Instrumento", "Guitarra");
    diccionario_agrega(D, "Habilidad", "Programador");
    diccionario_muestra(D);
    diccionario_libera(D);

    return 0;
}