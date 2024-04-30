#include <stdio.h>

#define PI 3.14
#define SUMA(x,y) (x+y)
#define ERROR return 1
#define BIEN return 0

// #pragma warning(disable: 4996) // Deshabilita el mensaje de advertencia 4996


int main(int argc,char *argv[]){
    // #define PI 3.14
    printf("%d\n",SUMA(10,10));
    // #undef PI
    
    #ifndef NOMBRE
    printf("No tienes nombre\n");
    #endif

    #ifdef PI
    printf("PI -> %f\n",PI);
    #else
    printf("PI no esta definido\n");
    #endif
    // eliminar una constante
    #undef PI
    #undef SUMA   
    BIEN;

//      #if defined(__linux__)
//    printf("l");
// #elif defined(_WIN32)
//     printf("w");
// #else
//     #error "Plataforma no soportada"
// #endif
}

// lsd /usr/include/