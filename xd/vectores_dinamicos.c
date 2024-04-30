#include <stdio.h>
#include <stdlib.h> // malloc y free
int main(int argc,char *argv[]){
    char *cadena;
    cadena = (char *)malloc(128 * sizeof(char));
    // cadena = (char *)malloc(sizeof(char) * 128);
    printf("Ingresa tu nombre -> ");
    // scanf("%s",cadena);
    fgets(cadena,128,stdin);
    printf("\nTu nombre es -> %s",cadena);

    printf("\nPrimer caracter -> %c",cadena[0]);
    free(cadena);


    return 0;
}