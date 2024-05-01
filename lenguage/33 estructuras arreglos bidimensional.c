#include <stdio.h>

// Definición de la estructura
struct Empleado {
    int id;
    char nombre[50];
    float salario;
};

int main(void) {
    // Declaración e inicialización de un arreglo bidimensional de empleados
    struct Empleado empleados[2][5] = {
        {
            {1, "Daniel", 2500.50},
            {2, "María", 2800.75},
            {3, "Pedro", 3000.25},
            {4, "Ana", 2700.00},
            {5, "Carlos", 3200.80}
        },
        {
            {6, "Laura", 2900.35},
            {7, "Pablo", 3100.60},
            {8, "Elena", 2600.45},
            {9, "Luis", 3300.70},
            {10, "Sofía", 3400.90}
        }
    };

    // Acceso a los empleados en el arreglo bidimensional
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Empleado [%d][%d]\n", i, j);
            printf("ID: %d\n", empleados[i][j].id);
            printf("Nombre: %s\n", empleados[i][j].nombre);
            printf("Salario: %.2f\n", empleados[i][j].salario);
            printf("\n");
        }
    }

    return 0;
}
