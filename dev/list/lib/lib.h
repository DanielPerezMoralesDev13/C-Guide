#ifndef LIB
#define LIB true

struct Lista {
    int i;
};

// Definición de un alias "List" para "struct Lista"
typedef struct Lista List;

int calcularLongitudLista(List lista[]);
void añadirItem(List lista[], int item);
void eliminarItem(List lista[], int item);
void imprimirLista(int **lista[]);
List redimensionarTamañoLista(List lista[]);


// Declaración de la estructura Lista



#endif
