// Autor: Daniel Benjamin Perez Morales
// GitHub: https://github.com/DanielPerezMoralesDev13
// Correo electrónico: danielperezdev@proton.me
#include <stdio.h>

// Definición de la estructura Persona
struct Persona {
    char nombre[50];
    int edad;
};

// Declaración de un nuevo tipo de datos usando typedef
typedef struct Persona Persona;

int main(void) {
    // Declaración de una variable de tipo Persona
    Persona persona1;

    // Asignación de valores a los miembros de la estructura
    strcpy(persona1.nombre, "Daniel");
    persona1.edad = 30;

    // Acceso a los miembros de la estructura
    printf("Datos de la persona:\n");
    printf("Nombre: %s\n", persona1.nombre);
    printf("Edad: %d\n", persona1.edad);

    return 0;
}
