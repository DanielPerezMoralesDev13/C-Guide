#include <stdio.h>

/*
Este código en C muestra cómo se pueden utilizar punteros a funciones para llamar a una función desde otra función a través de un puntero. Veamos cada parte del código y luego explicaremos la estructura de los punteros a funciones y algunos casos de uso comunes:

1. **Definición de la función `print`**:
   ```c
   void print(void);
   void print(void){
       printf("Hola daniel perez\n");
       return;
   }
   ```
   Aquí defines una función llamada `print` que no toma ningún argumento y no devuelve ningún valor. Simplemente imprime "Hola daniel perez" en la consola.

2. **Función `main`**:
   ```c
   int main(int argc, char *argv[]) {
       void (*funcion)(void);
       funcion = &print;
       funcion();
       return 0;
   }
   ```
   En la función `main`, defines un puntero a una función llamado `funcion`. Luego asignas la dirección de la función `print` al puntero `funcion` utilizando el operador de dirección `&`. Finalmente, llamas a la función a través del puntero `funcion`.

Ahora, hablemos sobre la estructura de los punteros a funciones y algunos casos de uso comunes:

### Estructura de los punteros a funciones:

Un puntero a función en C es similar a un puntero a cualquier otro tipo de datos, pero en lugar de apuntar a datos, apunta a una función. Su estructura básica es la siguiente:

```c
tipo_retorno (*nombre_puntero)(tipo_argumentos);
```

Donde:
- `tipo_retorno` es el tipo de dato que devuelve la función.
- `nombre_puntero` es el nombre del puntero a función.
- `tipo_argumentos` son los tipos de argumentos que recibe la función.

### Casos de uso comunes de punteros a funciones:

1. **Callbacks**: Los punteros a funciones se utilizan comúnmente en la implementación de callbacks, donde una función se pasa como argumento a otra función para que sea llamada en algún momento específico.

2. **Manejo de eventos**: En aplicaciones que manejan eventos, los punteros a funciones se utilizan para asociar una función con un evento específico.

3. **Ordenamiento personalizado**: En algoritmos de ordenamiento como `qsort`, se pueden pasar punteros a funciones para especificar un criterio de ordenamiento personalizado.

4. **Manejadores de señales**: En sistemas embebidos y sistemas operativos, los punteros a funciones se utilizan para definir manejadores de señales que se ejecutan en respuesta a eventos específicos.

Estos son solo algunos casos de uso comunes de punteros a funciones en C. Son una herramienta poderosa que permite una mayor flexibilidad en el diseño y la implementación de programas.*/

void print(void);
void print2(int x);
int print3(int x,int y);
int multiplication(int x,int y);

void print(void){
    printf("Hola daniel perez\n");
    return;
}

void print2(int x){
    printf("El numero es -> %d\n",x);
    return;
}

int print3(int x,int y){
    printf("La suma de x -> %d e y -> %d es = %d\n",x,y,x+y);
    return 2*(x+y);
}

int multiplication(int x,int y){
    return x*y;
}
struct obj{
    int campo1,campo2;
    int(*multiplicar)(int,int);
};

typedef struct obj object;
int main(int argc,char *argv[]){
    // tipo_retorno (*nombre_puntero)(tipo_argumentos);
    // void (*funcion)(void) = &print;
    
    // void (*funcion)(void);
    // funcion = &print;
    // (*funcion)();
    // funcion();

    // void (*funcion2)(int) = &print2;
    // (*funcion2)(10);
    
    // int (*funcion3)(int,int) = &print3;
    // int valor = (*funcion3)(10,5);
    // printf("valor = %d",valor);

    object f;
    f.campo1 = 5;
    f.campo2 = 6;
    f.multiplicar = &multiplication;
    int valor = (*f.multiplicar)(f.campo1,f.campo2);
    printf("valor -> %d\n",valor);

    return 0;
}