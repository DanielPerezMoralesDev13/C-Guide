#include <stdio.h>

int main(void) {
    // Declaración de variables
    int num;
    float num_float;
    double num_double;
    char caracter;
    char cadena[100];

    // Solicitar y leer un número entero
    printf("Ingrese un número entero: ");
    scanf("%d", &num);
    printf("El número ingresado es: %d\n", num);

    // Solicitar y leer un número decimal (float)
    printf("Ingrese un número decimal (float): ");
    scanf("%f", &num_float);
    printf("El número ingresado es: %f\n", num_float);

    // Solicitar y leer un número decimal (double)
    printf("Ingrese un número decimal (double): ");
    scanf("%lf", &num_double);
    printf("El número ingresado es: %lf\n", num_double);

    // Solicitar y leer un carácter
    printf("Ingrese un carácter: ");
    scanf(" %c", &caracter); // Espacio antes de %c para ignorar espacios en blanco
    printf("El carácter ingresado es: %c\n", caracter);

    // Solicitar y leer una cadena de caracteres (sin espacios)
    printf("Ingrese una cadena de caracteres sin espacios: ");
    scanf("%[^ ]", cadena); // Lee hasta encontrar un espacio
    printf("La cadena ingresada es: %s\n", cadena);

    // Limpiar el buffer de entrada
    fflush(stdin);

    // Solicitar y leer una cadena de caracteres (incluyendo espacios)
    printf("Ingrese una cadena de caracteres: ");
    fgets(cadena, sizeof(cadena), stdin);
    printf("La cadena ingresada es: %s\n", cadena);

    // Solicitar y leer un solo carácter
    printf("Ingrese un carácter: ");
    caracter = getchar();
    printf("El carácter ingresado es: %c\n", caracter);

    // Limpiar el buffer de entrada
    fflush(stdin);

    // Solicitar y leer una cadena de caracteres (incluyendo espacios)
    printf("Ingrese una cadena de caracteres: ");
    gets(cadena); // Advertencia: gets no es seguro, podría causar desbordamiento de búfer
    printf("La cadena ingresada es: %s\n", cadena);
    
    return 0;
}
