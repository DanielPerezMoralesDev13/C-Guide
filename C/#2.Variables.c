// Tema: Variables
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(void){
    char string[] = "My String variable";
    int integer = 5;
    char convercion_de_integer_a_string[20];
    bool booleano = false;
    float flotante = 1.2;
    char nombre[20];
    int edad;

     // Constantes
    /* 
    En C las constantes, se representa con mayúsculas y guiones bajos. Se usa para indicar que una variable no debe ser modificada en el futuro

    Las constantes se suelen definir al principio del fichero o al principio de una clase Y puden tener cualquier tipo de dato
    */
   
    float FLOTANTE = 1.2;
    char CADENA[] = "Mi cadena";
    bool BOOLEANO = true;
    int ENTERO = 5;

    printf("%s \n", string);

    printf("%d \n",integer);

    // Utiliza sprintf para convertir el entero a cadena
    sprintf(convercion_de_integer_a_string, "%d", integer);
    printf("%s \n", convercion_de_integer_a_string);
    printf("Tamaño de str: %zu bytes \n", sizeof(convercion_de_integer_a_string));
    

    printf("%d \n",booleano);

    // Concatenación de variables en un print
    printf("%s %s %d %f \n",string, convercion_de_integer_a_string, booleano, flotante);
    printf("Este es el valor de: %d \n", booleano);

    //  Algunas funciones del sistema
    /*
    función sizeof() para obtener el tamaño en bytes de cualquier tipo de dato en C. 
    */

    printf("%ld \n", strlen(string));

    // Inputs
    printf("Ingresa tu nombre: ");
    fgets(nombre,sizeof(nombre),stdin);
    printf("Ingresa tu edad: ");
    scanf("%d", &edad);

    printf("%s \n" , nombre);
    printf("%d \n",edad);

    
    printf("%d\n", ENTERO);

    return 0;
}
