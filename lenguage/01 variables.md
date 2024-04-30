
# **para imprimir variables en C**

1. **Enteros**

    - `%d`: Para enteros.
    - `%hd`: Para enteros cortos (short int).
    - `%ld`: Para enteros largos (long int).
    - `%lld`: Para enteros muy largos (long long).

2. **Float**

   - `%f`: Para flotantes (float).
   - `%lf`: Para dobles (double).
   - `%Lf`: Para dobles largos (long double).
   - `%f` + `%fi`, `%lf` + `%lfi`, `%Lf` + `%Lfi`: *Para imprimir los componentes reales e imaginarios de los números complejos.*

3. **Caracteres**

   - `%c`: Para caracteres.
   - `%d`: Para valores booleanos (bool).

> [!NOTE]
> *Es importante recordar que, para imprimir los componentes reales e imaginarios de los números complejos, se utilizan las funciones `crealf()`, `cimagf()`, `creal()`, `cimag()`, `creall()` y `cimagl()` para obtener la parte real e imaginaria de los números complejos de tipo `float`, `double` y `long double` respectivamente.*

---

## Datos interesantes

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
printf("Tamaño de int en bits: `%lu`\n", sizeof(int) * 8);
```

Esto imprimirá el tamaño del tipo de datos `int` en bits en tu sistema específico.
