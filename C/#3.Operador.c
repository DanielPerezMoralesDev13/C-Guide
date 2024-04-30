#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
    // Operaciones con enteros
    // Suma
    printf("%d\n", 3 + 4);
    // Resta
    printf("%d\n", 3 - 4);
    // Multiplicación
    printf("%d\n", 3 * 4);
    // División
    printf("%f\n", 3.0 / 4); // Necesitas especificar que uno de los operandos es flotante
    // Módulo
    printf("%d\n", 10 % 3);
    // División entera
    printf("%d\n", 10 / 3);
    // Potencia
    printf("%d\n", (int)pow(2, 3)); // Necesitas incluir math.h y convertir el resultado a entero
    // Jerarquía de operaciones
    printf("%d\n", (int)(pow(2, 3) + 3 - 7 / 1 / 4)); // Necesitas convertir el resultado a entero

    // Operaciones con cadenas de texto
    char hola[20] = "Hola ";
    // Concatenación de cadenas de texto
    printf("%s\n", strcat(strcat(hola, "lenguage C "), "¿Qué tal?"));
    // Conversión de un número a cadena de texto
    printf("%s\n", strcat(hola, "5"));

    // Operaciones mixtas
    // Multiplicación de cadenas de texto por un número entero
    char holaRepetido[] = "Hola Hola Hola Hola Hola ";
    printf("%s\n", holaRepetido);
    // Multiplicación de cadenas de texto por un número entero
    char holaPotencia[] = "Hola Hola Hola Hola Hola Hola Hola Hola ";
    printf("%s\n", holaPotencia);

    // Operadores Comparativos
    // > significa mayor que
    printf("%d\n", 3 > 4); // False
    // < significa menor que
    printf("%d\n", 3 < 4); // True
    // >= significa mayor o igual que
    printf("%d\n", 3 >= 4); // False
    // <= significa menor o igual que
    printf("%d\n", 4 <= 4); // True
    // == significa igual que
    printf("%d\n", 3 == 4); // False
    // != significa distinto que
    printf("%d\n", 3 != 4); // True

    // Operadores Lógicos
    // and
    printf("%d\n", 3 > 4 && strcmp("Hola", "lenguage C") > 0);
    // or
    printf("%d\n", 3 > 4 || strcmp("Hola", "lenguage C") > 0);
    printf("%d\n", 3 < 4 && strcmp("Hola", "lenguage C") < 0);
    printf("%d\n", 3 < 4 || strcmp("Hola", "lenguage C") > 0);
    printf("%d\n", 3 < 4 || (strcmp("Hola", "lenguage C") > 0 && 4 == 4));
    // not
    printf("%d\n", !(3 > 4));

    return 0;
}
