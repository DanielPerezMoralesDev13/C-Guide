# Pasos para compilar el ejemplo que te proporcioné

1. Guarda el código en dos archivos separados, uno para cada archivo fuente:

    `main.c`:

    ```c
    #include <stdio.h>

    extern int variable_externa;

    int main() {
        printf("El valor de la variable externa es: %d\n", variable_externa);
        return 0;
    }
    ```

    `extern.c`:

    ```c
    int variable_externa = 42;
    ```

2. Abre una terminal en el directorio donde guardaste los archivos.

3. Compila ambos archivos fuente usando un comando de compilación:

    ```bash
    gcc -o programa main.c extern.c 
    ```

    Este comando le dice al compilador GCC que compile ambos archivos fuente y los enlace en un programa llamado `programa`. `-o programa` especifica el nombre del archivo de salida.

4. Si no hay errores, se generará un archivo ejecutable llamado `programa` en el mismo directorio.

5. Ejecuta el programa:

```bash
./programa
```

Esto imprimirá el valor de la variable externa en la consola. En este caso, el resultado será:

```txt
El valor de la variable externa es: 42
```
