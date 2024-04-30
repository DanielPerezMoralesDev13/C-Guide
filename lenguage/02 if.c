#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {
    // Condicionales con if
    bool condition = false;
    int number = 18;
    char *string = "";
    if (condition) {
        printf("La condición del if se cumple\n");
    }

    if (number > 10 && number < 20) {
        printf("Es mayor que 10 y menor que 20\n");
    } else if (number == 25) {
        printf("Es igual a 25\n");
    } else {
        printf("Es menor o igual que 10 o mayor o igual que 20 o distinto de 25\n");
    }

   
    // Condicional con inspección de valor
    if (!*string) {
        printf("Mi cadena de texto es vacía\n");
    }

    if (strcmp(string, "Mi cadena de textoooooo") == 0) {
        printf("Estas cadenas de texto coinciden\n");
    }

    return 0;
}
