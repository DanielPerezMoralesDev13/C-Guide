#include <stdio.h>
#include <string.h>

// Definición de la estructura
struct Persona {
    char nombre[50];
    int edad;
    float altura;
};

int main() {
    // Declaración e inicialización de una estructura
    struct Persona persona1;
    strcpy(persona1.nombre, "Juan");
    persona1.edad = 30;
    persona1.altura = 1.75;

    // Acceso a los miembros de la estructura
    printf("Datos de la persona:\n");
    printf("Nombre: %s\n", persona1.nombre);
    printf("Edad: %d\n", persona1.edad);
    printf("Altura: %.2f\n", persona1.altura);

    // También puedes declarar una estructura e inicializarla al mismo tiempo
    struct Persona persona2 = {"María", 25, 1.60};

    // Acceso a los miembros de la segunda estructura
    printf("\nDatos de otra persona:\n");
    printf("Nombre: %s\n", persona2.nombre);
    printf("Edad: %d\n", persona2.edad);
    printf("Altura: %.2f\n", persona2.altura);

    return 0;
}
