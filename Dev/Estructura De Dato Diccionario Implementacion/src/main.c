#include "./diccionario.c"

int main(void)
{
    Diccionario *D = crear_diccionario();
    agregar_key_diccionario(D, "name", "persona");
    imprimir_items(D);
    
    // Liberar la memoria del diccionario al finalizar
    free(D);
    return EXIT_SUCCESS;
}