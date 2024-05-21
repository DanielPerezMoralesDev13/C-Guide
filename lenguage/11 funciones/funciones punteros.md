<!-- Autor: Daniel Benjamin Perez Morales -->
<!-- GitHub: https://github.com/DanielPerezMoralesDev13 -->
<!-- Correo electrónico: danielperezdev@proton.me -->
# ***La diferencia fundamental entre `*sumarDosNumeros` y `sumarDosNumeros` es que uno es un puntero a una función (`sumarDosNumeros`) y el otro es el nombre de la función (`sumarDosNumeros`)**

1. **`sumarDosNumeros`***: Esta forma declara un puntero a una función. Esto significa que `*sumarDosNumeros` no invoca la función, sino que simplemente declara un puntero que puede apuntar a una función que tiene una firma específica. Este puntero se puede asignar a cualquier función que coincida con la firma (es decir, el tipo de retorno y los tipos de argumentos).*

2. **`sumarDosNumeros`***: Esta es la definición de una función llamada `sumarDosNumeros`. Cuando utilizas `sumarDosNumeros`, estás invocando esa función.*

**Aquí hay un ejemplo para clarificar:**

```c
#include <stdio.h>

// Definición de la función sumarDosNumeros
int sumarDosNumeros(int x, int y) {
    return x + y;
}

int main() {
    int (*puntero_suma)(int, int); // Declaración de un puntero a una función

    puntero_suma = &sumarDosNumeros; // Asignación del puntero a la dirección de la función

    // Invocación de la función a través del puntero
    int resultado = (*puntero_suma)(3, 5);
    printf("Resultado: %d\n", resultado);

    return 0;
}
```

*En este ejemplo, `puntero_suma` es un puntero a una función que toma dos enteros como argumentos y devuelve un entero. Se le asigna la dirección de la función `sumarDosNumeros`. Luego, se invoca la función a través del puntero.*
