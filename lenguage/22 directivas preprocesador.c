#include <stdio.h>

// Directiva #if
#if defined(_WIN32)
    #define SISTEMA "Windows"
#elif defined(__linux__)
    #define SISTEMA "Linux"
#elif defined(__APPLE__)
    #define SISTEMA "macOS"
#else
    #define SISTEMA "Desconocido"
#endif

// Directiva #ifdef
#ifdef SISTEMA
    #define PRINT_SISTEMA printf("Sistema operativo: %s\n", SISTEMA);
#else
    #define PRINT_SISTEMA printf("Sistema operativo desconocido\n");
#endif

// Directiva #ifndef
#ifndef NOMBRE
    #define NOMBRE "Daniel"
#endif

// Directiva #include
#ifdef _WIN32
    #include "windows.h"
#elif defined(__linux__)
    #include "unistd.h"
#elif defined(__APPLE__)
    #include "unistd.h"
#endif

// Directiva #pragma
#pragma warning(disable: 4996)

// Directiva #error
#ifndef NOMBRE
    #error "La variable NOMBRE no está definida"
#endif

int main(void) {
    // Uso de las constantes y macros definidas
    printf("Nombre: %s\n", NOMBRE);

    // Uso de las funciones definidas en los ficheros de inclusión
    #ifdef _WIN32
        printf("Directiva para Windows\n");
        Sleep(1000); // Ejemplo de uso de una función de Windows
    #elif defined(__linux__) || defined(__APPLE__)
        printf("Directiva para Linux o macOS\n");
        sleep(1); // Ejemplo de uso de una función de Linux o macOS
    #endif

    // Impresión del sistema operativo
    PRINT_SISTEMA;

    return 0;
}
