#include <stdio.h>
#include <stdlib.h>

// Definición de la estructura de Lista
typedef struct {
    void **datos;
    int capacidad;
    int longitud;
} Lista;

// Función para inicializar una lista
Lista *crear_lista() {
    Lista *lista = malloc(sizeof(Lista));
    lista->capacidad = 10; // Capacidad inicial
    lista->longitud = 0;
    lista->datos = malloc(sizeof(void *) * lista->capacidad);
    return lista;
}

// Función para añadir un elemento a la lista
void agregar_elemento(Lista *lista, void *elemento) {
    if (lista->longitud >= lista->capacidad) {
        lista->capacidad *= 2; // Duplicar la capacidad si es necesario
        lista->datos = realloc(lista->datos, sizeof(void *) * lista->capacidad);
    }
    lista->datos[lista->longitud++] = elemento;
}

// Función para imprimir la longitud de la lista
void imprimir_longitud(Lista *lista) {
    printf("%d\n", lista->longitud);
}

int main() {
    // Definición de listas
    Lista *lista = crear_lista();
    Lista *otra_lista = crear_lista();

    // Agregar elementos a la lista
    int numero1 = 35, numero2 = 24, numero3 = 62, numero4 = 52, numero5 = 30;
    agregar_elemento(lista, &numero1);
    agregar_elemento(lista, &numero2);
    agregar_elemento(lista, &numero3);
    agregar_elemento(lista, &numero4);
    agregar_elemento(lista, &numero5);

    // Imprimir la longitud de la lista
    imprimir_longitud(lista);

    // Acceso a elementos
    printf("%d\n", *(int *)lista->datos[0]);
    printf("%d\n", *(int *)lista->datos[1]);

    // Eliminar la lista
    free(lista->datos);
    free(lista);
    free(otra_lista->datos);
    free(otra_lista);

    return 0;
}
