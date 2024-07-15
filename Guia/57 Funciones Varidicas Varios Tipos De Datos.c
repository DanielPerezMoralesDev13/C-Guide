// Autor: Daniel Benjamin Perez Morales
// GitHub: https://github.com/DanielPerezMoralesDev13
// Correo electrónico: danielperezdev@proton.me
#include <stdio.h>
#include <stdarg.h>

// Función variádica para imprimir una lista de enteros
void imprimirEnteros(int num_args, ...) {
    va_list args;
    va_start(args, num_args);

    for (int i = 0; i < num_args; i++) {
        int valor = va_arg(args, int);
        printf("%d ", valor);
    }

    va_end(args);
    printf("\n");
    return;
}

// Función variádica para imprimir una lista de números de punto flotante
void imprimirDoubles(int num_args, ...);
void imprimirDoubles(int num_args, ...) {
    va_list args;
    va_start(args, num_args);

    for (int i = 0; i < num_args; i++) {
        double valor = va_arg(args, double);
        printf("%.2f ", valor);
    }

    va_end(args);
    printf("\n");
    return;
}

// Definición de una estructura
typedef struct {
    int id;
    char nombre[20];
} Persona;

// Función variádica para imprimir una lista de estructuras Persona
void imprimirPersonas(int num_args, ...);
void imprimirPersonas(int num_args, ...) {
    va_list args;
    va_start(args, num_args);

    for (int i = 0; i < num_args; i++) {
        Persona persona = va_arg(args, Persona);
        printf("ID: %d, Nombre: %s\n", persona.id, persona.nombre);
    }

    va_end(args);
    return;
}

int main(void) {
    // Ejemplo de llamadas a las funciones variádicas

    // Imprimir enteros
    imprimirEnteros(3, 10, 20, 30);

    // Imprimir doubles
    imprimirDoubles(4, 3.14, 2.718, 1.618, 0.577);

    // Imprimir estructuras Persona
    Persona p1 = {1, "Daniel"};
    Persona p2 = {2, "Sixdally"};
    imprimirPersonas(2, p1, p2);

    return 0;
}
