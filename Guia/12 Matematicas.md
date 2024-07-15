<!-- Autor: Daniel Benjamin Perez Morales -->
<!-- GitHub: https://github.com/DanielPerezMoralesDev13 -->
<!-- Correo electrónico: danielperezdev@proton.me -->
# ***Ejemplos de funciones matemáticas comunes en C, incluyendo funciones de la biblioteca matemática `math.h`***

```c
// Autor: Daniel Benjamin Perez Morales
// GitHub: https://github.com/DanielPerezMoralesDev13
// Correo electrónico: danielperezdev@proton.me
#include <stdio.h>
#include <math.h>

int main(void) {
    // Función para calcular el valor absoluto de un número
    double numero = -5.5;
    double valor_absoluto = fabs(numero);
    printf("Valor absoluto de %.2f: %.2f\n", numero, valor_absoluto);

    // Función para calcular la raíz cuadrada de un número
    double radicando = 25.0;
    double raiz_cuadrada = sqrt(radicando);
    printf("Raíz cuadrada de %.2f: %.2f\n", radicando, raiz_cuadrada);

    // Función para calcular el valor de e elevado a la potencia x
    double x = 2.0;
    double exponencial = exp(x);
    printf("e elevado a %.2f: %.2f\n", x, exponencial);

    // Función para calcular el logaritmo natural de un número
    double logaritmo_natural = log(x);
    printf("Logaritmo natural de %.2f: %.2f\n", x, logaritmo_natural);

    // Función para calcular el logaritmo en base 10 de un número
    double logaritmo_base_10 = log10(x);
    printf("Logaritmo base 10 de %.2f: %.2f\n", x, logaritmo_base_10);

    // Función para calcular el valor máximo entre dos números
    double numero1 = 10.5, numero2 = 20.7;
    double maximo = fmax(numero1, numero2);
    printf("El máximo entre %.2f y %.2f es: %.2f\n", numero1, numero2, maximo);

    // Función para calcular el valor mínimo entre dos números
    double minimo = fmin(numero1, numero2);
    printf("El mínimo entre %.2f y %.2f es: %.2f\n", numero1, numero2, minimo);

    return 0;
}
```

*Este código muestra cómo usar algunas de las funciones matemáticas más comunes disponibles en C a través de la biblioteca `math.h`. Las funciones incluidas son:*

- **`fabs()`:** *Calcula el valor absoluto de un número.*

- **`sqrt()`:** *Calcula la raíz cuadrada de un número.*

- **`exp()`:** *Calcula el valor de e elevado a la potencia x.*

- **`log()`:** *Calcula el logaritmo natural de un número.*

- **`log10()`:** *Calcula el logaritmo en base 10 de un número.*

- **`fmax()`:** *Calcula el valor máximo entre dos números.*

- **`fmin()`:** *Calcula el valor mínimo entre dos números.*

*Estas son solo algunas de las funciones matemáticas disponibles en C; la biblioteca `math.h` ofrece muchas más para realizar una variedad de operaciones matemáticas.*
