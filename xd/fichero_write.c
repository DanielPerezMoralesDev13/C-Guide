#include <stdio.h>

// int argc,char *argv[]
int main(void){
    FILE *fichero = fopen("./ejemplo.md","w");
    char cadena[10];
    printf("Ingresa tu nombre: ");
    fgets(cadena,sizeof(cadena),stdin);
    fprintf(fichero,"Tu nombre es %s y la longitud es %zu",cadena,sizeof(cadena));
    fclose(fichero);
    return 0;
}