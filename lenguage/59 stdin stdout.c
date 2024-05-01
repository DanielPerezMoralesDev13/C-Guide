#include <stdio.h>

int main() {
    // Redirigiendo la salida estándar a un archivo
    FILE *fichero = stdout;  // Redirige a la salida estándar
    fprintf(fichero, "Este es un mensaje que será redirigido a la salida estándar (stdout).\n");

    // Leyendo desde la entrada estándar
    char buffer[100];
    printf("Por favor, ingrese una cadena: ");
    fgets(buffer, sizeof(buffer), stdin);  // Lee desde la entrada estándar
    fprintf(stdout, "Usted ingresó: %s", buffer);  // Escribe en la salida estándar

    return 0;
}
