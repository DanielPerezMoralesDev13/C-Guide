#include <stdio.h>
#include <stdlib.h>

int ejemploCalloc(void);
int ejemploMalloc(void);

int otroEjemploMalloc(void);
int otroEjemploCalloc(void);

int otroEjemploCalloc(void){
    int *p;
    int n = 5; // Número inicial de elementos
    int i;

    // Asignar memoria dinámica utilizando calloc
    p = (int *)calloc(n, sizeof(int));

    // Verificar si la asignación de memoria fue exitosa
    if (p == NULL) {
        printf("Error al asignar memoria.");
        return 1;
    }

    // Utilizar la memoria asignada
    for (i = 0; i < n; i++) {
        p[i] = i + 1; // Asignar valores al arreglo dinámico
        printf("%d ", p[i]); // Imprimir los valores asignados
    }

    // Liberar la memoria asignada
    free(p);

    // Reasignar memoria a 10 elementos
    n = 10;
    p = (int *)calloc(n, sizeof(int));

    // Verificar si la asignación de memoria fue exitosa
    if (p == NULL) {
        printf("Error al asignar memoria.");
        return 1;
    }

    // Utilizar la memoria reasignada
    printf("\n\nDespués de reasignar memoria:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", p[i]); // Imprimir los valores asignados
    }

    // Liberar la memoria asignada
    free(p);

    return 0;
}
int otroEjemploMalloc(void){
    int *p;
    int n = 5; // Número inicial de elementos
    int i;

    // Asignar memoria dinámica utilizando malloc
    p = (int *)malloc(n * sizeof(int));

    // Verificar si la asignación de memoria fue exitosa
    if (p == NULL) {
        printf("Error al asignar memoria.");
        return 1;
    }

    // Utilizar la memoria asignada
    for (i = 0; i < n; i++) {
        p[i] = i + 1; // Asignar valores al arreglo dinámico
        printf("%d ", p[i]); // Imprimir los valores asignados
    }

    // Reasignar memoria a 10 elementos
    n = 10;
    p = (int *)realloc(p, n * sizeof(int));

    // Verificar si la reasignación de memoria fue exitosa
    if (p == NULL) {
        printf("Error al reasignar memoria.");
        return 1;
    }

    // Utilizar la memoria reasignada
    printf("\n\nDespués de reasignar memoria:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", p[i]); // Imprimir los valores asignados
    }

    // Liberar la memoria asignada
    free(p);

    return 0;
}
int ejemploCalloc(void){
    int *p;
    int n = 5; // Número de elementos a reservar

    // Asignar memoria dinámica utilizando calloc
    p = (int *)calloc(n, sizeof(int));

    // Verificar si la asignación de memoria fue exitosa
    if (p == NULL) {
        printf("Error al asignar memoria.");
        return 1;
    }

    // Utilizar la memoria asignada
    for (int i = 0; i < n; i++) {
        p[i] = i + 1; // Asignar valores al arreglo dinámico
        printf("%d ", p[i]); // Imprimir los valores asignados
    }

    // Liberar la memoria asignada
    free(p);
    return 0;
}
int ejemploMalloc(void){
    int *p;
    int n = 5; // Número de elementos a reservar

    // Asignar memoria dinámica utilizando malloc
    p = (int *)malloc(n * sizeof(int));

    // Verificar si la asignación de memoria fue exitosa
    if (p == NULL) {
        printf("Error al asignar memoria.");
        return 1;
    }

    // Utilizar la memoria asignada
    for (int i = 0; i < n; i++) {
        p[i] = i + 1; // Asignar valores al arreglo dinámico
        printf("%d ", p[i]); // Imprimir los valores asignados
    }

    // Liberar la memoria asignada
    free(p);
    return 0;
}
int main(int argc,char *argv[]){
    // unsigned int *x;
    // x = malloc(sizeof(int));
    // *x = 5;
    // printf("%d\n",*x);
    // free(x);

    int *p; // creo un puntero
    int n = 5; // Número de elementos a reservar

    // Asignar memoria dinámica utilizando malloc
    p = (int *)malloc(n * sizeof(int));

    // Verificar si la asignación de memoria fue exitosa
    if (p == NULL) {
        printf("Error al asignar memoria.");
        return 1;
    }

    // Utilizar la memoria asignada
    for (int i = 0; i < n; i++) {
        scanf("%d",&p[i]); // Asignar valores al arreglo dinámico
        printf("valor -> p[%d] %d \n",i, p[i]); // Imprimir los valores asignados
    }

    // Liberar la memoria asignada
    free(p);
    return 0;
}