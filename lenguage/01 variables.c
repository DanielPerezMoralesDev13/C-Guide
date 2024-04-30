#include <stdio.h>
#include <stdbool.h>
#include <complex.h>

int main(){
    /**
     * Comentario Doxygen se utiliza para generar documentacion
     * automaticamente a partir del codigo fuente. 

    */

    float variable_flotante = 10.5; // variable_flotante
    const int constante = 3.141592; // constante

    // Entero
    int numero = 10;
    short int numero_corto = 10;
    long int numero_largo = 100000;
    long long numero_muy_largo = 10000000000;

    // Flotantes
    float flotante = 3.141592;
    double doble = 1.4142;
    long double doble_largo = 3.423482349283479283;

    // Flotantes con Complejos
    float _Complex complejo_float = 1.0 + 2.0i;
    double _Complex complejo_doble = 1.0 + 2.0i;
    long double _Complex complejo_largo_doble = 1.0 + 2.0i;

    // Caracteres

    char caracteres = 'A';
    unsigned char caracter_sin_signo = 'B';


    // Booleano

    bool boleano = true;
    bool boleano_2 = false;

    // Imprimir Hola y el nombre del lenguaje de programación

    printf("\n Hola, Lenguaje C rendimiento 100%% \n\n");
    printf("Entero: %d\n", numero);
    printf("Entero corto: %hd\n", numero_corto);
    printf("Entero largo: %ld\n", numero_largo);
    printf("Entero muy largo: %lld\n", numero_muy_largo);

    printf("Flotante: %f\n", flotante);
    printf("Doble: %lf\n", doble);
    printf("Doble largo: %Lf\n", doble_largo);

    printf("Complejo flotante: %f + %fi\n", crealf(complejo_float), cimagf(complejo_float));
    printf("Complejo doble: %lf + %lfi\n", creal(complejo_doble), cimag(complejo_doble));
    printf("Complejo largo doble: %Lf + %Lfi\n", creall(complejo_largo_doble), cimagl(complejo_largo_doble));

    printf("Carácter: %c\n", caracteres);
    printf("Carácter sin signo: %c\n", caracter_sin_signo);

    printf("Booleano: %d\n", boleano);
    printf("Booleano 2: %d\n", boleano_2);
    
    return 0;

}
