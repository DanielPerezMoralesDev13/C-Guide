#include <stdio.h>
#include <stdbool.h>
#include <complex.h>

int main(int argc, char *argv[]){

    /*Sitio oficial del lenguaje C  https://www.iso-9899.info/wiki/The_Standard*/

    // Comentario en una sóla línea

    /*
    Comentario 
    en 
    varias 
    líneas
    */



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
    /*

    %d: Para enteros.
    %hd: Para enteros cortos (short int).
    %ld: Para enteros largos (long int).
    %lld: Para enteros muy largos (long long).
    %f: Para flotantes (float).
    %lf: Para dobles (double).
    %Lf: Para dobles largos (long double).
    %f + %fi, %lf + %lfi, %Lf + %Lfi: Para imprimir los componentes reales e imaginarios de los números complejos.
    %c: Para caracteres.
    %d: Para valores booleanos (bool).

    Es importante recordar que, para imprimir los componentes reales e imaginarios de los números complejos, se utilizan las funciones crealf(), cimagf(), creal(), cimag(), creall() y cimagl() para obtener la parte real e imaginaria de los números complejos de tipo float, double y long double respectivamente.
    */

    return 0;

}

/*
1. **Enteros**:
   - `int`: 32 bits en la mayoría de las implementaciones modernas (puede ser 16 bits en sistemas embebidos o antiguos).
   - `short int`: 16 bits.
   - `long int`: 32 bits en sistemas de 32 bits y 64 bits en sistemas de 64 bits.
   - `long long`: 64 bits.

2. **Punto flotante**:
   - `float`: 32 bits.
   - `double`: 64 bits.
   - `long double`: 64 bits o 80 bits en la mayoría de las implementaciones modernas.

3. **Caracteres**:
   - `char`: 8 bits.
   - `unsigned char`: 8 bits.

4. **Booleano**:
   - `bool`: No está definido por el estándar C, pero suele ser 8 bits (1 byte) ya que se suele tratar como un tipo de datos entero.

Es importante tener en cuenta que estos tamaños pueden variar dependiendo del compilador y la arquitectura del sistema. Por lo tanto, si necesitas conocer con precisión los tamaños en bits de los tipos de datos en tu sistema específico, puedes utilizar la función `sizeof()` en C para obtener la cantidad de bytes que ocupa cada tipo de datos y luego multiplicar por 8 para obtener la cantidad en bits. Por ejemplo:

```c
printf("Tamaño de int en bits: %lu\n", sizeof(int) * 8);
```

Esto imprimirá el tamaño del tipo de datos `int` en bits en tu sistema específico.
*/