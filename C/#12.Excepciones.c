#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definición de estructuras de excepción
typedef struct {
    char message[100];
} Exception;

// Función para crear excepción de valor
Exception createValueError(const char *message) {
    Exception e;
    strcpy(e.message, message);
    return e;
}

// Función para crear excepción de tipo
Exception createTypeError(const char *message) {
    Exception e;
    strcpy(e.message, message);
    return e;
}

// Función para imprimir excepción
void printException(Exception e) {
    printf("%s\n", e.message);
}

int main(void) {
    int numeroUno = 5;
    char numeroTres[] = "1";

    // Excepción base: try except
    printf("Excepción base: try except\n");
    if (atoi(numeroTres) != 0) {
        printf("%d\n", numeroUno + atoi(numeroTres));
        printf("No se ha producido un error\n");
    } else {
        printf("Se ha producido un error\n");
    }
    
    // Flujo completo de una excepción: try except else finally
    printf("\nFlujo completo de una excepción: try except else finally\n");
    if (atoi(numeroTres) != 0) {
        printf("%d\n", numeroUno + atoi(numeroTres));
        printf("No se ha producido un error\n");
        printf("La ejecución continúa correctamente\n");
    } else {
        printf("Se ha producido un error\n");
    }
    printf("La ejecución continúa\n");

    // Excepciones por tipo
    printf("\nExcepciones por tipo\n");
    if (atoi(numeroTres) != 0) {
        printf("%d\n", numeroUno + atoi(numeroTres));
        printf("No se ha producido un error\n");
    } else {
        Exception e = createValueError("Se ha producido un ValueError");
        printException(e);
    }

    // Captura de la información de la excepción
    printf("\nCaptura de la información de la excepción\n");
    if (atoi(numeroTres) != 0) {
        printf("%d\n", numeroUno + atoi(numeroTres));
        printf("No se ha producido un error\n");
    } else {
        Exception e = createValueError("Se ha producido un ValueError");
        printException(e);
    }

    // Otra manera para capturar múltiples excepciones
    printf("\nOtra manera para capturar múltiples excepciones\n");
    if (atoi(numeroTres) != 0) {
        printf("%d\n", numeroUno + atoi(numeroTres));
        printf("No se ha producido un error\n");
    } else {
        Exception e = createValueError("Se ha producido un ValueError");
        printException(e);
    }

    return 0;
}
