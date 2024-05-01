#include <stdio.h>
#include <string.h>
int main(void) {
    // While
    int condition = 0;

    while (condition < 10) {
        printf("%d\n", condition);
        condition += 2;
    }

    printf("Mi condición es mayor o igual que 10\n");

    // Bucle infinito con break
    while (1) {
        printf("Esto es un bucle infinito que se detiene con break\n");
        break;
    }

    condition = 0;

    while (condition < 20) {
        condition++;
        if (condition == 15) {
            printf("Se detiene la ejecución\n");
            break;
        }
        printf("%d\n", condition);
    }

    printf("La ejecución continúa\n");

    // For
    int lista[] = {35, 24, 62, 52, 30, 30, 17};
    int lista_size = sizeof(lista) / sizeof(lista[0]);

    for (int i = 0; i < lista_size; i++) {
        printf("%d\n", lista[i]);
    }

    int tupla[] = {35, 1.77, 0, 0, 0}; // Cambiado a arreglo de enteros
    int tupla_size = sizeof(tupla) / sizeof(tupla[0]);

    for (int i = 0; i < tupla_size; i++) {
        printf("%d\n", tupla[i]);
    }

    char *conjunto[] = {"Daniel", "Moure", "35"}; // Cambiado a arreglo de cadenas de caracteres
    int conjunto_size = sizeof(conjunto) / sizeof(conjunto[0]);

    for (int i = 0; i < conjunto_size; i++) {
        printf("%s\n", conjunto[i]);
    }

    char *diccionario[] = {"Nombre", "Daniel", "Apellido", "Perez", "Edad", "35", "1", "Python"}; // Cambiado a arreglo de cadenas de caracteres
    int diccionario_size = sizeof(diccionario) / sizeof(diccionario[0]);

    for (int i = 0; i < diccionario_size; i += 2) {
        printf("%s\n", diccionario[i]);
        if (strcmp(diccionario[i], "Edad") == 0) {
            break;
        }
    }

    printf("La ejecución continúa\n");

    for (int i = 0; i < diccionario_size; i += 2) {
        printf("%s\n", diccionario[i]);
        if (strcmp(diccionario[i], "Edad") == 0) {
            continue;
        }
        printf("Se ejecuta\n");
    }

    printf("La ejecución continúa\n");

    return 0;
}
