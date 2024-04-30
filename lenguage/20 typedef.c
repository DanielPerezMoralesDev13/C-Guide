#include <stdio.h>

// Definición de la estructura 'fecha' y su renombramiento con typedef
typedef struct {
    unsigned int dia;
    unsigned int mes;
    unsigned int año;
} Fecha;

// Renombramiento del tipo de dato 'long int' como 'Precio'
typedef long int Precio;

int main(int argc, char *argv[]) {
    // Declaración de variables utilizando los tipos renombrados
    Precio recomendado = 80, mayorista = 50, minorista = 90;
    Fecha f = {13, 12, 2005}; // Creación de una variable de tipo 'Fecha'

    // Impresión de los valores
    printf("Precio recomendado: %ld\n", recomendado);
    printf("Precio mayorista: %ld\n", mayorista);
    printf("Precio minorista: %ld\n", minorista);
    printf("Fecha: %d/%d/%d\n", f.dia, f.mes, f.año);

    return 0;
}
