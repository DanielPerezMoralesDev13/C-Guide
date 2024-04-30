#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Definición de la estructura de libro
struct Libro {
    int id;
    char titulo[100];
    struct Libro *siguiente; // Puntero al siguiente libro
};


// Definición de la estructura de nodo
struct Nodo {
    int dato;
    struct Nodo *siguiente;
};

int listaEnlazado(void);
void imprimirLista(struct Nodo *nodo);
// Función para imprimir los elementos de la lista enlazada
void imprimirLista(struct Nodo *nodo) {
    while (nodo != NULL) {
        printf("%d ", nodo->dato);
        nodo = nodo->siguiente;
    }
}


int listaEnlazado(void) {
    // Creación de los nodos de la lista
    struct Nodo *nodo1, *nodo2, *nodo3;
    nodo1 = (struct Nodo *)malloc(sizeof(struct Nodo));
    nodo2 = (struct Nodo *)malloc(sizeof(struct Nodo));
    nodo3 = (struct Nodo *)malloc(sizeof(struct Nodo));

    // Asignación de valores a los nodos
    nodo1->dato = 1;
    nodo2->dato = 2;
    nodo3->dato = 3;

    // Enlazar los nodos
    nodo1->siguiente = nodo2;
    nodo2->siguiente = nodo3;
    nodo3->siguiente = NULL;

    // Imprimir los elementos de la lista enlazada
    printf("Lista enlazada: ");
    imprimirLista(nodo1);

    // Liberar la memoria asignada a los nodos
    free(nodo1);
    free(nodo2);
    free(nodo3);

    return 0;
}

int main(int argc,char *argv[]) {
    // Creación de un libro dinámico
    struct Libro *miLibro;
    miLibro = (struct Libro *)malloc(sizeof(struct Libro));

    // Asignación de valores al libro
    miLibro->id = 1;
    strcpy(miLibro->titulo, "La guía del programador");

    // Asignación de memoria para el libro siguiente
    miLibro->siguiente = (struct Libro *)malloc(sizeof(struct Libro));

    // Verificar si la asignación de memoria para el siguiente libro fue exitosa
    if (miLibro->siguiente == NULL) {
        printf("Error al asignar memoria para el siguiente libro.");
        free(miLibro); // Liberar la memoria asignada al primer libro
        return 1;
    }
    miLibro->siguiente->id = 3;
    strcpy(miLibro->siguiente->titulo, "La guía del pentesting");

    // Acceso a los valores del libro
    printf("ID del libro: %d\n", miLibro->id);
    printf("Título del libro: %s\n", miLibro->titulo);

    printf("ID del libro siguiente: %d\n", miLibro->siguiente->id);
    printf("Título del libro siguiente: %s\n", miLibro->siguiente->titulo);

    // Liberar la memoria asignada al libro
    free(miLibro);
    system("clear");
    listaEnlazado();
    return 0;
}
