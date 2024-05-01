#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definición de la estructura
struct Persona {
    char *nombre;
    int edad;
};

// Función para crear una nueva persona
struct Persona *crearPersona(char *nombre, int edad);
struct Persona *crearPersona(char *nombre, int edad) {
    // Asignar memoria para la estructura
    struct Persona *nuevaPersona = (struct Persona *)malloc(sizeof(struct Persona));
    if (nuevaPersona == NULL) {
        printf("Error: No se pudo asignar memoria para la persona.\n");
        exit(1);
    }

    // Asignar memoria para el nombre y copiar el nombre proporcionado
    nuevaPersona->nombre = (char *)malloc((strlen(nombre) + 1) * sizeof(char));
    if (nuevaPersona->nombre == NULL) {
        printf("Error: No se pudo asignar memoria para el nombre.\n");
        exit(1);
    }
    strcpy(nuevaPersona->nombre, nombre);

    // Asignar la edad
    nuevaPersona->edad = edad;

    return nuevaPersona;
}

int main() {
    // Crear una nueva persona
    struct Persona *persona1 = crearPersona("Daniel", 30);

    // Imprimir los detalles de la persona
    printf("Persona 1:\n");
    printf("Nombre: %s\n", persona1->nombre);
    printf("Edad: %d\n", persona1->edad);

    // Liberar la memoria asignada para la persona y su nombre
    free(persona1->nombre);
    free(persona1);

    return 0;
}
