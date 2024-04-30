// Tema: Variables
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
    char string[] = "My String variable";
    printf("%s \n", string);

    int integer = 5;
    printf("%d \n",integer);

    char convercion_de_integer_a_string[20];
    // Utiliza sprintf para convertir el entero a cadena
    sprintf(convercion_de_integer_a_string, "%d", integer);
    printf("%s \n", convercion_de_integer_a_string);
    printf("Tamaño de str: %zu bytes \n", sizeof(convercion_de_integer_a_string));
    

    bool booleano = false;
    printf("%d \n",booleano);

    float flotante = 1.2;
    // Concatenación de variables en un print
    printf("%s %s %d %f \n",string, convercion_de_integer_a_string, booleano, flotante);
    printf("Este es el valor de: %d \n", booleano);

    //  Algunas funciones del sistema
    /*
    función sizeof() para obtener el tamaño en bytes de cualquier tipo de dato en C. 
    */

    printf("%ld \n", strlen(string));

    // # Inputs
    char nombre[20];
    printf("Ingresa tu nombre: ");
    fgets(nombre,sizeof(nombre),stdin);
    int edad;
    printf("Ingresa tu edad: ");
    scanf("%d", &edad);

    printf("%s \n" , nombre);
    printf("%d \n",edad);


    // Constantes
    /* 
    En C las constantes, se representa con mayúsculas y guiones bajos. Se usa para indicar que una variable no debe ser modificada en el futuro

    Las constantes se suelen definir al principio del fichero o al principio de una clase Y puden tener cualquier tipo de dato
    */

    float FLOTANTE = 1.2;
    char CADENA[] = "Mi cadena";
    bool BOOLEANO = true;
    int ENTERO = 5;
    printf("%d\n", ENTERO);

    return 0;
}
