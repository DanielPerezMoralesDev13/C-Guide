<!-- Autor: Daniel Benjamin Perez Morales -->
<!-- GitHub: https://github.com/DanielPerezMoralesDev13 -->
<!-- Correo electrónico: danielperezdev@proton.me -->

# ***Aquí tienes un ejemplo básico de cómo usar la macro `assert` en C***

```c
// Autor: Daniel Benjamin Perez Morales
// GitHub: https://github.com/DanielPerezMoralesDev13
// Correo electrónico: danielperezdev@proton.me
#include <stdio.h>
#include <assert.h>

int main(void) {
    int x = 5;
    int y = 10;

    // Asegurarse de que x sea igual a 5
    assert(x == 5);

    // Asegurarse de que y sea menor que 10 (esto fallará)
    assert(y < 10);

    printf("Todo está bien\n");

    return 0;
}
```

*En este ejemplo, se utiliza la macro `assert` para verificar condiciones en tiempo de ejecución. Si la condición especificada en `assert` es falsa, el programa terminará y mostrará un mensaje de error que indica la expresión que falló y el fichero y la línea en la que ocurrió el error.*

> [!IMPORTANT]
> *Es importante tener en cuenta que la macro `assert` solo está activa cuando la macro `NDEBUG` no está definida. Por lo tanto, si deseas desactivar todas las verificaciones de `assert` en tu código, puedes definir `NDEBUG` antes de incluir la biblioteca `assert.h`, por ejemplo, con una bandera de compilación `-DNDEBUG`.*
