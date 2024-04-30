#include <stdio.h>

// int argc, char *argv[]
int main(void){
    // FILE *fichero = fopen("./ejemplo.md","r");
    FILE *fichero = fopen("./ejemplo.md","w");
    FILE *fichero2 = fopen("./main.py","r");

    // int caracter;
    char caracteres[100];

    // fgetc, fputc, leer y escribir caracter
    //  fgets ,fputs  leer y escribir cadena

    // fgetc retorna un int y EOF signifca final de linea
    
    // primer ejemplo
    // while((caracter = fgetc(fichero)) != EOF){
    //     printf("%c",caracter);
    // }

    // segundo ejemplo lo malo es que si el fichero contiene varios lineas varias saltos de linea solo leera la primera 
    // fgets(caracteres,sizeof(caracteres),fichero);
    // printf("%s",caracteres);

    // Para solucionarlo
    // while(fgets(caracteres,sizeof(caracteres),fichero) != NULL) printf("%s",caracteres);
    
    // tercer ejemplo
    while (fgets(caracteres,sizeof(caracteres),fichero2) != NULL) fputs(caracteres,fichero);
    fclose(fichero2);
    fclose(fichero);
    return 0;
}

// gcc -Wall -Wextra -pedantic -std=c11 -Werror -Wunused -Wuninitialized -Wshadow -Wformat -Wconversion -Wmissing-prototypes -Wmissing-declarations -Wcast-qual -Wpointer-arith -Wlogical-op -o fichero fichero.c lib/lib.h
