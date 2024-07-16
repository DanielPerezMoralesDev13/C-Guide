#include "../Headers/lib.h"

inline extern Diccionario *crear_diccionario(void)
{
    Diccionario *D = (Diccionario *)malloc(sizeof(Diccionario));
    if (D == NULL)
    {
        perror("Error al asignar memoria para el diccionario");
        exit(EXIT_FAILURE);
    }

    D->persona = NULL; // Aún no asignamos memoria para los punteros a Persona
    D->tamaño = 0;

    return D;
}

void agregar_key_diccionario(Diccionario *D, const char *key, const char *value)
{
    // Asegurarse de tener suficiente espacio para almacenar la nueva persona
    D->persona = (Persona **)realloc(D->persona, (D->tamaño + 1) * sizeof(Persona *));
    if (D->persona == NULL)
    {
        perror("Error al reasignar memoria para personas en el diccionario");
        exit(EXIT_FAILURE);
    }

    // Asignar memoria para la nueva Persona
    D->persona[D->tamaño] = (Persona *)malloc(1 * sizeof(Persona));
    if (D->persona[D->tamaño] == NULL)
    {
        perror("Error al asignar memoria para una nueva Persona en el diccionario");
        exit(EXIT_FAILURE);
    }

    // Asignar la clave y el valor
    D->persona[D->tamaño]->key = key;
    D->persona[D->tamaño]->value = value;

    // Incrementar el tamaño del diccionario
    D->tamaño++;
    return;
}

void imprimir_items(const Diccionario *D)
{
    for (int i = 0; i < D->tamaño; i++){
        printf("Key: %s Value: %s\n", D->persona[i]->key, D->persona[i]->value);
    }
    return;
}