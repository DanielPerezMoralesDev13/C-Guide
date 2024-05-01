#include <stdio.h>

int main(void){
    // Condicional con match case para verificar condiciones dentro de case
    int age = 18;

    switch (age) {
        case 18:
            printf("Eres mayor de edad\n");
            break;
        case 17:
            printf("Eres menor de edad\n");
            break;
        case 5:
            printf("Eres un niño\n");
            break;
        default:
            break;
    }


    // Condicional con _ como comodín en match case
    char letter = 'a';

    switch (letter) {
        case 'a':
            printf("La letra es a\n");
            break;
        case 'b':
            printf("La letra es b\n");
            break;
        default:
            printf("La letra no es a ni b\n");
            break;
    }
    return 0;
}