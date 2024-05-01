#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definición de la estructura Persona
typedef struct {
    char *nombre;
    char *segundo_nombre;
    char *alias;
} Persona;

// Función para crear una nueva Persona
Persona *crearPersona(char *nombre, char *segundo_nombre, char *alias) {
    Persona *persona = (Persona *)malloc(sizeof(Persona));
    if (persona == NULL) {
        printf("Error: No se pudo asignar memoria para Persona\n");
        exit(1);
    }
    persona->nombre = strdup(nombre);
    persona->segundo_nombre = strdup(segundo_nombre);
    persona->alias = strdup(alias);
    return persona;
}

// Función para obtener el nombre de la Persona
char *getNombre(Persona *persona) {
    return persona->nombre;
}

// Función para simular caminar
void caminar(Persona *persona) {
    printf("%s %s (%s) está caminando\n", persona->nombre, persona->segundo_nombre, persona->alias);
}

// Función principal
int main(void) {
    // Crear una nueva Persona
    Persona *persona = crearPersona("Daniel", "Benjamin", "Sin alias");

    // Imprimir detalles de la Persona
    printf("%s %s (%s)\n", persona->nombre, persona->segundo_nombre, persona->alias);
    printf("%s\n", getNombre(persona));
    caminar(persona);

    // Liberar memoria
    free(persona->nombre);
    free(persona->segundo_nombre);
    free(persona->alias);
    free(persona);

    return 0;
}
