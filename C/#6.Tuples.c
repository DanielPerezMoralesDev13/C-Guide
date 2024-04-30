#include <stdio.h>

// Definición de una estructura para simular tuplas en C
typedef struct {
    int entero;
    char *cadena;
} Tupla;

int main() {
    // Creación de una tupla
    Tupla tupla = {35, "Daniel"};

    // Acceso a los elementos de la tupla
    printf("%d\n", tupla.entero);
    printf("%s\n", tupla.cadena);

    // No es posible modificar los elementos de la tupla
    // tupla.entero = 40; // Esto generaría un error de compilación

    // Concatenación de tuplas
    Tupla otra_tupla = {40, "Perez"};
    // No existe una concatenación directa de tuplas en C como en Python
    // Se tendría que implementar manualmente una función para concatenar

    // Conversión de tupla a lista
    // No existe una conversión directa de tupla a lista en C como en Python
    // Se tendría que implementar manualmente

    // Eliminación de una tupla
    // No es necesario eliminar la tupla en C ya que el recolector de basura se encargará de la memoria
    // No hay una operación equivalente a "del" en C

    return 0;
}
