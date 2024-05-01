#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hola";
    char str2[] = "Mundo";
    char str3[20];
    char str4[20] = "¡Hola, ";
    char str5[] = "Mundo!";
    int longitud;

    // Copiar una cadena en otra
    strcpy(str3, str1);
    puts("strcpy(str3, str1):");
    puts(str3);

    // Concatenar dos cadenas
    strcat(str4, str5);
    puts("strcat(str4, str5):");
    puts(str4);

    // Longitud de una cadena
    longitud = strlen(str4);
    printf("strlen(str4): %d\n", longitud);

    // Comparar dos cadenas
    if (strcmp(str1, str2) == 0) {
        printf("Las cadenas son iguales\n");
    } else {
        printf("Las cadenas son diferentes\n");
    }

    // Usando memset para establecer todos los elementos de str3 a '\0'
    memset(str3, '\0', sizeof(str3));
    puts("str3 después de memset:");
    puts(str3);

    return 0;
}
