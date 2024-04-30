#include <stdio.h>

int main(){
    // While
    int condition = 0;

    while (condition < 10) {
        printf("%d\n", condition);
        condition += 2;
    }

    printf("Mi condición es mayor o igual que 10\n");

    // Bucle infinito con break
    while (1) {
        printf("Esto es un bucle infinito que se detiene con break\n");
        break;
    }

    condition = 0;

    while (condition < 20) {
        condition++;
        if (condition == 15) {
            printf("Se detiene la ejecución\n");
            break;
        }
        printf("%d\n", condition);
    }


    return 0;
}