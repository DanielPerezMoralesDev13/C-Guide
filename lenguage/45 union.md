# Por supuesto, aquí tienes un ejemplo simple de cómo usar una unión en C

```c
#include <stdio.h>

// Definición de la unión
union MiUnion {
    int entero;
    float flotante;
    char caracter;
};

int main(void) {
    union MiUnion miUnion;

    // Asignación de valores a la unión
    miUnion.entero = 10;
    printf("Valor entero: %d\n", miUnion.entero);

    miUnion.flotante = 3.14;
    printf("Valor flotante: %.2f\n", miUnion.flotante);

    miUnion.caracter = 'A';
    printf("Valor caracter: %c\n", miUnion.caracter);

    // Imprimir el tamaño de la unión
    printf("Tamaño de la unión: %lu bytes\n", sizeof(union MiUnion));

    return 0;
}
```

En este ejemplo, hemos definido una unión llamada `MiUnion` que puede contener un entero (`int`), un flotante (`float`) o un caracter (`char`). Luego, en la función `main()`, creamos una instancia de esta unión llamada `miUnion`.

Hacemos varias asignaciones de valores a diferentes miembros de la unión y luego los imprimimos. Notarás que los cambios en un miembro de la unión afectan a los otros. Esto se debe a que todos los miembros comparten la misma ubicación de memoria.

Finalmente, imprimimos el tamaño de la unión utilizando `sizeof()` para demostrar cuánto espacio ocupa en la memoria.
