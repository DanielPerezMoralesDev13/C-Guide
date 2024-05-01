#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

// Definición de la estructura de un elemento de un diccionario
typedef struct {
    char *key;
    void *value;
} KeyValuePair;

// Definición de la estructura del diccionario
typedef struct {
    KeyValuePair elements[MAX_SIZE];
    int size;
} Dictionary;

// Función para inicializar un diccionario
void initDictionary(Dictionary *dict) {
    dict->size = 0;
}

// Función para insertar un elemento en el diccionario
void insert(Dictionary *dict, char *key, void *value) {
    if (dict->size < MAX_SIZE) {
        dict->elements[dict->size].key = strdup(key);
        dict->elements[dict->size].value = value;
        dict->size++;
    } else {
        printf("Error: El diccionario está lleno\n");
    }
}

// Función para buscar un valor en el diccionario por su clave
void *getValue(Dictionary *dict, char *key) {
    for (int i = 0; i < dict->size; i++) {
        if (strcmp(dict->elements[i].key, key) == 0) {
            return dict->elements[i].value;
        }
    }
    return NULL; // Clave no encontrada
}

// Función para eliminar un elemento del diccionario por su clave
void removeKey(Dictionary *dict, char *key) {
    for (int i = 0; i < dict->size; i++) {
        if (strcmp(dict->elements[i].key, key) == 0) {
            free(dict->elements[i].key);
            dict->elements[i] = dict->elements[dict->size - 1];
            dict->size--;
            return;
        }
    }
}

// Función para imprimir todos los elementos del diccionario
void printDictionary(Dictionary *dict) {
    for (int i = 0; i < dict->size; i++) {
        printf("%s: %s\n", dict->elements[i].key, (char *)dict->elements[i].value);
    }
}

int main(void) {
    Dictionary dict;
    initDictionary(&dict);

    insert(&dict, "Nombre", "Daniel");
    insert(&dict, "Apellido", "Perez");
    insert(&dict, "Edad", "35");

    printf("Valor de la clave 'Nombre': %s\n", (char *)getValue(&dict, "Nombre"));

    printf("Diccionario:\n");
    printDictionary(&dict);

    removeKey(&dict, "Apellido");
    printf("Diccionario después de eliminar 'Apellido':\n");
    printDictionary(&dict);

    return 0;
}
