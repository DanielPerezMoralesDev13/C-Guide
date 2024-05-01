#include <stdio.h>
#include <stdlib.h>

// Definición de la estructura de un nodo
struct Nodo {
    int dato;
    struct Nodo* siguiente;
};

// Función para crear un nuevo nodo
struct Nodo *crearNodo(int dato);
struct Nodo *crearNodo(int dato) {
    struct Nodo *nuevo_nodo = (struct Nodo*)malloc(sizeof(struct Nodo));
    if (nuevo_nodo == NULL) {
        printf("Error: No se pudo asignar memoria para el nuevo nodo.\n");
        exit(1);
    }
    nuevo_nodo->dato = dato;
    nuevo_nodo->siguiente = NULL;
    return nuevo_nodo;
}

// Función para insertar un nodo al final de la lista
void insertarAlFinal(struct Nodo **cabeza, int dato);
void insertarAlFinal(struct Nodo **cabeza, int dato) {
    struct Nodo* nuevo_nodo = crearNodo(dato);
    if (*cabeza == NULL) {
        *cabeza = nuevo_nodo;
    } else {
        struct Nodo* actual = *cabeza;
        while (actual->siguiente != NULL) {
            actual = actual->siguiente;
        }
        actual->siguiente = nuevo_nodo;
    }
    return;
}

// Función para imprimir la lista
void imprimirLista(struct Nodo* cabeza);
void imprimirLista(struct Nodo* cabeza) {
    struct Nodo* actual = cabeza;
    while (actual != NULL) {
        printf("%d -> ", actual->dato);
        actual = actual->siguiente;
    }
    printf("NULL\n");
    return;
}

// Función principal
int main(void) {
    struct Nodo *lista = NULL;

    // Insertar elementos en la lista
    insertarAlFinal(&lista, 10);
    insertarAlFinal(&lista, 20);
    insertarAlFinal(&lista, 30);

    // Imprimir la lista
    printf("Lista enlazada: ");
    imprimirLista(lista);

    return 0;
}
