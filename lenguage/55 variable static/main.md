# Ejemplo básico de cómo se pueden utilizar variables estáticas en C

```c
#include <stdio.h>

void funcion() {
    // Variable estática local
    static int contador = 0;
    
    // Incrementa el contador
    contador++;
    
    printf("El valor del contador es: %d\n", contador);
}

int main() {
    // Llama a la función varias veces
    funcion();
    funcion();
    funcion();
    
    return 0;
}
```

En este ejemplo, la variable `contador` es estática dentro de la función `funcion()`. Esto significa que, a diferencia de las variables locales normales, su valor persiste entre llamadas a la función. Cada vez que se llama a `funcion()`, el valor de `contador` se incrementa en 1 y se muestra por pantalla. Esto se logra gracias a que la variable `contador` es estática, lo que significa que mantiene su valor incluso después de que la función ha terminado de ejecutarse.
