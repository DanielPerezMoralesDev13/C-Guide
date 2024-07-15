// Autor: Daniel Benjamin Perez Morales
// GitHub: https://github.com/DanielPerezMoralesDev13
// Correo electrónico: danielperezdev@proton.me
#include <stdio.h>

// Enumeración para días de la semana
enum DiaSemana {
    LUNES,
    MARTES,
    MIERCOLES,
    JUEVES,
    VIERNES,
    SABADO,
    DOMINGO
};

// Enumeración para direcciones cardinales
enum Direcciones {
    NORTE,
    SUR,
    ESTE,
    OESTE
};

// Enumeración para notas musicales
enum NotasMusicales {
    DO,
    RE,
    MI,
    FA,
    SOL,
    LA,
    SI,
    NUM_NOTAS // Valor que indica el número total de notas
};

struct fecha{
    unsigned int dia;
    unsigned int mes;
    unsigned int año;
    enum DiaSemana dia_semana;
};

// Array constante de frecuencias para cada nota
const double frecuencias[NUM_NOTAS] = {
    261.63, // DO
    293.66, // RE
    329.63, // MI
    349.23, // FA
    392.00, // SOL
    440.00, // LA
    493.88  // SI
};

int main(void) {
    // Ejemplo 1: Uso de enum para días de la semana
    enum DiaSemana hoy = MARTES;
    printf("Hoy es %d\n", hoy);

    // Ejemplo 2: Uso de enum para direcciones cardinales
    enum Direcciones direccion = NORTE;
    printf("La dirección es %d\n", direccion);

    // Ejemplo 3: Asignación de valores específicos a enum
    enum Meses {
        ENERO = 1,
        FEBRERO,
        MARZO,
        ABRIL,
        MAYO,
        JUNIO,
        JULIO,
        AGOSTO,
        SEPTIEMBRE,
        OCTUBRE,
        NOVIEMBRE,
        DICIEMBRE
    };
    enum Meses mes_actual = ABRIL;
    printf("Estamos en el mes %d\n", mes_actual);

    enum NotasMusicales nota_actual = MI;
    printf("La frecuencia de la nota MI es %.2f Hz\n", frecuencias[nota_actual]);

    struct fecha f;
    f.dia = 13;
    f.mes = 12;
    f.año = 2005;
    f.dia_semana = VIERNES;
    printf("fecha -> %d/%d/%d ",f.dia,f.mes,f.año);
    switch (f.dia_semana){
    case LUNES:
        printf("LUNES");
        break;
    case MARTES:
        printf("MARTES");
        break;
    case MIERCOLES:
        printf("MIERCOLES");
        break;
    case JUEVES:
        printf("JUEVES");
        break;
    case VIERNES:
        printf("VIERNES");
        break;    
    default:
        break;
    }
    printf("\n");

    return 0;
}
