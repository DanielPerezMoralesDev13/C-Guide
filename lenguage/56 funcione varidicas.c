#include <stdio.h>
#include <stdarg.h>

// Función variádica para calcular el promedio de una lista de números
double promedio(int num_args, ...);
double promedio(int num_args, ...) {
    va_list args;            // Declara una lista de argumentos
    double suma = 0.0;
    
    va_start(args, num_args);    // Inicializa la lista de argumentos
    
    // Itera a través de los argumentos sumando los valores
    for (int i = 0; i < num_args; i++) {
        suma += va_arg(args, double);
    }
    
    va_end(args);    // Finaliza la lista de argumentos
    
    return suma / num_args;
}

int main(void) {
    // Calcula el promedio de 3 números
    double prom = promedio(3, 5.0, 7.0, 9.0);
    printf("El promedio es: %.2f\n", prom);
    
    // Calcula el promedio de 5 números
    prom = promedio(5, 12.0, 15.0, 18.0, 20.0, 25.0);
    printf("El promedio es: %.2f\n", prom);
    
    return 0;
}
