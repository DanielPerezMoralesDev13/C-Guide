#include <stdio.h>
// int argc, char* argv


// les puede cambiar el nombre a argc, argv

// Esto es un comentario que describe los parámetros de la función main(). argc es un entero que representa el número de argumentos de la línea de comandos pasados al programa, y argv es un array de punteros a caracteres que representa los argumentos mismos.
int main(int argc, char* argv[]){
    // unsigned int v[8];
    printf("argc = %d\n",argc);
    for (unsigned int i = 0; i < argc;i++){
        printf("%d. \"%s\"\n",i,argv[i]);
    }

    return 0;
}

/*
argc (argument count): Este nombre se refiere al número de argumentos pasados al programa a través de la línea de comandos cuando se ejecuta. La "c" en argc significa "count" (conteo en inglés). Es un entero que representa cuántos argumentos se pasaron, incluyendo el nombre del programa como el primer argumento.

argv (argument vector): Este nombre se refiere al vector (o array) de argumentos pasados al programa. La "v" en argv significa "vector" en inglés. Es un array de punteros a caracteres (char *) donde cada elemento del array apunta a un argumento específico pasado al programa.
*/

