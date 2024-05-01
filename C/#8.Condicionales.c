#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(void) {
    // Condicionales con if
    bool condition = false;

    if (condition) {
        printf("La condición del if se cumple\n");
    }

    int number = 18;

    if (number > 10 && number < 20) {
        printf("Es mayor que 10 y menor que 20\n");
    } else if (number == 25) {
        printf("Es igual a 25\n");
    } else {
        printf("Es menor o igual que 10 o mayor o igual que 20 o distinto de 25\n");
    }

    // Condicional con inspección de valor
    char *string = "";

    if (!*string) {
        printf("Mi cadena de texto es vacía\n");
    }

    if (strcmp(string, "Mi cadena de textoooooo") == 0) {
        printf("Estas cadenas de texto coinciden\n");
    }

    // Condicional con match case
    int age = 18;

    switch (age) {
        case 18:
            printf("Eres mayor de edad\n");
            break;
        case 17:
            printf("Eres menor de edad\n");
            break;
        case 5:
            printf("Eres un niño\n");
            break;
        default:
            break;
    }

    // Condicional con match case para verificar condiciones dentro de case
    switch (age) {
        case 18:
            printf("Eres mayor de edad\n");
            break;
        case 17:
            printf("Eres menor de edad\n");
            break;
        case 5:
            printf("Eres un niño\n");
            break;
        default:
            break;
    }

    // Condicional con _ como comodín en match case
    char letter = 'a';

    switch (letter) {
        case 'a':
            printf("La letra es a\n");
            break;
        case 'b':
            printf("La letra es b\n");
            break;
        default:
            printf("La letra no es a ni b\n");
            break;
    }

    return 0;
}
