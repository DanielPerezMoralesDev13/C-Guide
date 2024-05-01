# Las funciones `inline` en C son una sugerencia al compilador para que "incruste" el cuerpo de la función directamente en el lugar donde se llama, en lugar de realizar una llamada de función normal. Esto puede mejorar el rendimiento al eliminar el costo de la llamada a la función y la sobrecarga asociada

Para declarar una función `inline` en C, se utiliza la palabra clave `inline` antes de la declaración de la función. Sin embargo, esta es solo una sugerencia al compilador, y el compilador puede optar por no seguir la sugerencia si lo considera apropiado.

Aquí tienes un ejemplo de cómo se utiliza una función `inline`:

```c
#include <stdio.h>

// Declaración de la función inline
inline int suma(int a, int b) {
    return a + b;
}

int main(void) {
    int x = 10, y = 20;
    int resultado;

    // Llamada a la función inline
    resultado = suma(x, y);

    printf("La suma de %d y %d es %d\n", x, y, resultado);

    return 0;
}
```

En este ejemplo, la función `suma` está declarada como `inline`. Cuando el compilador encuentra una llamada a esta función, puede optar por reemplazar la llamada con el cuerpo de la función en línea, en lugar de realizar una llamada de función normal. Esto puede mejorar el rendimiento en algunos casos.

Es importante tener en cuenta que el uso de funciones `inline` puede aumentar el tamaño del código generado, ya que el cuerpo de la función puede duplicarse en varios lugares donde se llama. Además, las funciones `inline` no se pueden recursivas y no pueden tener definiciones recursivas o tener un bucle `while`.
