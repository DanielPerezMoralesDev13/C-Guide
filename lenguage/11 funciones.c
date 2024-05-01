#include <stdio.h>

// Función sin retorno y sin parámetros
void saludar(void);
void saludar(void) {
    printf("¡Hola! Esta es una función sin retorno y sin parámetros.\n");
    return;
}

// Función con retorno y con parámetros
int suma(int a, int b);
int suma(int a, int b) {
    return a + b;
}

// Función con retorno, con parámetros y recursiva
int factorial(int n);
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// Función que modifica una variable global
int variable_global = 10;

void modificar_variable_global(void);
void modificar_variable_global(void) {
    variable_global = 20;
    return;
}

// Función que llama a otras funciones
void funcion_compuesta(void);
void funcion_compuesta(void) {
    // Llamada a función sin retorno y sin parámetros
    saludar();
    
    // Llamada a función con retorno y con parámetros
    int resultado_suma = suma(5, 3);
    printf("La suma es: %d\n", resultado_suma);

    // Llamada a función recursiva
    int resultado_factorial = factorial(5);
    printf("El factorial de 5 es: %d\n", resultado_factorial);

    // Llamada a función que modifica una variable global
    modificar_variable_global();
    printf("El valor de la variable global es: %d\n", variable_global);
    return;
}

int main(void) {
    // Llamada a función compuesta
    funcion_compuesta();

    return 0;
}
