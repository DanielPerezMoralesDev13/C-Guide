#include <stdio.h>

// Definición de la estructura Fecha
struct Fecha {
    int dia;
    int mes;
    int año;
};

// Definición de la estructura Persona
struct Persona {
    char nombre[50];
    int edad;
    struct Fecha fecha_nacimiento; // Estructura anidada
};

// Función para imprimir los datos de una persona
void imprimir_persona(struct Persona p) {
    printf("Nombre: %s\n", p.nombre);
    printf("Edad: %d\n", p.edad);
    printf("Fecha de nacimiento: %d/%d/%d\n", p.fecha_nacimiento.dia, p.fecha_nacimiento.mes, p.fecha_nacimiento.año);
}

// Función para modificar la edad de una persona mediante un puntero
void modificar_edad(struct Persona *p, int nueva_edad) {
    p->edad = nueva_edad; // Acceso a la edad a través del puntero
}

int main() {
    // Declaración e inicialización de una variable de tipo Persona
    struct Persona persona = {"Daniel", 30, {15, 5, 1990}};
    struct Persona persona2;
    strcpy(persona.nombre, "Daniel");
    persona2.edad = 30;
    persona2.fecha_nacimiento.dia = 15; // día
    persona2.fecha_nacimiento.mes = 5;  // mes
    persona2.fecha_nacimiento.año = 1990; // año

    // Llamada a la función para imprimir los datos de la persona
    printf("Datos originales de la persona:\n");
    imprimir_persona(persona);

    // Llamada a la función para modificar la edad de la persona
    modificar_edad(&persona, 35);

    // Imprimir los datos de la persona después de modificar la edad
    printf("\nDatos de la persona después de modificar la edad:\n");
    imprimir_persona(persona);
    imprimir_persona(persona2);

    return 0;
}
