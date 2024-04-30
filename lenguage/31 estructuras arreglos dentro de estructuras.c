#include <stdio.h>

// Definición de la estructura
struct Empleado {
    int id;
    char *nombre;
    float salarios[12]; // Arreglo para almacenar los salarios de cada mes
};

int main() {
    // Declaración e inicialización de una estructura
    struct Empleado empleado1 = {1, "Juan", {2000.50, 2100.75, 2200.25, 2300.00, 2400.50, 2500.75, 2600.25, 2700.00, 2800.50, 2900.75, 3000.25, 3100.00}};

    // Acceso a los miembros de la estructura
    printf("ID: %d\n", empleado1.id);
    printf("Nombre: %s\n", empleado1.nombre);

    // Impresión de los salarios de cada mes
    printf("Salarios mensuales:\n");
    for (int i = 0; i < 12; i++) {
        printf("Mes %d: %.2f\n", i+1, empleado1.salarios[i]);
    }

    return 0;
}
