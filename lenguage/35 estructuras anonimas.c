#include <stdio.h>

struct {
    int a;
    float b;
    double c;
    char d;
    int *x[10];
} anonima,anonima2,anonima3;

int main(){
    anonima.a = 10;
    anonima.b = 18.12;
    anonima.c = 20.45;
    anonima.d = 'a';
    for (int i = 0; i < 10; i++){
        anonima.x[i] = &i;
    }    
    return 0;
}