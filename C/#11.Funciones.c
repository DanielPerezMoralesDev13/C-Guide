#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Función para imprimir texto en mayúsculas
void imprimirTextoEnMayuscula(char **textos) {
    for (int i = 0; textos[i] != NULL; i++) {
        // Calcular la longitud de la cadena actual
        int longitud = strlen(textos[i]);
        
        // Crear un nuevo arreglo para almacenar la cadena en mayúsculas
        char textoMayuscula[longitud + 1]; // +1 para el carácter nulo
        
        // Copiar la cadena actual en el nuevo arreglo y convertir cada caracter a mayúscula
        for (int j = 0; j < longitud; j++) {
            textoMayuscula[j] = toupper(textos[i][j]);
        }
        textoMayuscula[longitud] = '\0'; // Agregar el carácter nulo al final
        
        // Imprimir la cadena en mayúsculas
        printf("%s\n", textoMayuscula);
    }
}

// Función principal
int main() {
    // Arreglo de punteros a caracteres
    char *textos[] = {"hola", "mundo", "en", "mayúsculas", NULL};

    // Llamar a la función
    imprimirTextoEnMayuscula(textos);

    return 0;
}
