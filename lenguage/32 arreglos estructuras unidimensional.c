#include <stdio.h>

// Definición de la estructura
struct Empleado {
    int id;
    char nombre[50];
    float salario;
};

int main() {
    // Declaración e inicialización de una lista de empleados
    struct Empleado empleados[3] = {
        {1, "Juan", 2500.50},
        {2, "María", 2800.75},
        {3, "Pedro", 3000.25}
    };

    // Acceso a los empleados en la lista
    for (int i = 0; i < 3; i++) {
        printf("ID: %d\n", empleados[i].id);
        printf("Nombre: %s\n", empleados[i].nombre);
        printf("Salario: %.2f\n", empleados[i].salario);
        printf("\n");
    }

    return 0;
}
