#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definición de la estructura Persona
struct Persona {
    char *nombre;
    int edad;
};

// Función para inicializar una persona
void inicializar_persona(struct Persona *p, const char *nombre, int edad);
void inicializar_persona(struct Persona *p, const char *nombre, int edad) {
    p->nombre = strdup(nombre); // Asignar memoria y copiar el nombre
    p->edad = edad;
    return;
}

// Función para liberar la memoria asignada a una persona
void liberar_persona(struct Persona *p);
void liberar_persona(struct Persona *p) {
    free(p->nombre); // Liberar la memoria del nombre
    return;
}

// Función para imprimir los datos de una persona
void imprimir_persona(const struct Persona *p);
void imprimir_persona(const struct Persona *p) {
    printf("Nombre: %s\n", p->nombre);
    printf("Edad: %d\n", p->edad);
    return;
}

int main(void) {
    // Declaración e inicialización de una persona utilizando la función inicializar_persona
    struct Persona persona1;
    inicializar_persona(&persona1, "Daniel", 30);

    // Llamada a la función para imprimir los datos de la persona
    printf("Datos de la persona 1:\n");
    imprimir_persona(&persona1);

    // Liberar la memoria asignada a la persona
    liberar_persona(&persona1);

    return 0;
}
