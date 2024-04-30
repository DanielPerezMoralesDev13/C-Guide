#include <stdio.h>

// Los enumerados en C son tipos de datos que permiten definir un conjunto de constantes con valores enteros asociados. Aquí hay algunas cosas que se pueden hacer y no se pueden hacer con enumerados en C:

// ### Lo que se puede hacer con enumerados:

// 1. **Definir conjuntos de constantes**: Los enumerados permiten definir un conjunto de constantes legibles por humanos que están asociadas con valores enteros únicos.

// 2. **Asignar valores personalizados a constantes**: Puedes asignar valores específicos a las constantes del enumerado. Si no se especifica un valor, las constantes del enumerado se numeran automáticamente a partir de 0 y se incrementan en 1 para cada constante adicional.

// 3. **Usar en operaciones aritméticas**: Los valores de las constantes del enumerado se comportan como enteros y pueden ser utilizados en operaciones aritméticas.

// ### Lo que no se puede hacer con enumerados:

// 1. **Asignar tipos de datos diferentes**: En C, no puedes asignar tipos de datos diferentes (como float o double) a las constantes de un enumerado. Los valores asociados con las constantes del enumerado deben ser enteros.

// 2. **Impresión con formato incorrecto**: En tu ejemplo, intentas imprimir un valor de enumerado como un número flotante (%f). Esto es incorrecto ya que los valores de los enumerados son enteros. Deberías utilizar el formato correcto para enteros (%d o %u).

// Por lo tanto, en tu código, aunque has definido un valor personalizado para MARTES (11), aún es una constante de enumerado y se comporta como un número entero. Si intentas imprimirlo como un número flotante, obtendrás un valor incorrecto. Lo correcto sería usar `%d` para imprimir valores de enumerado.
// Si no se le especifica empezara desde el 0

// MARTES valdra 11
// enum DIA_SEMANA {LUNES=10,MARTES,MIERCOLES,JUEVES,VIERNES,SABADO,DOMINGO};
enum DIA_SEMANA {LUNES,MARTES,MIERCOLES,JUEVES,VIERNES,SABADO,DOMINGO};

struct fecha{
    unsigned int dia;
    unsigned int mes;
    unsigned int año;
    enum DIA_SEMANA dia_semana;
};

int main(int argc,char *argv[]){
    struct fecha f;
    f.dia = 13;
    f.mes = 12;
    f.año = 2005;
    f.dia_semana = VIERNES;
    printf("fecha -> %d/%d/%d ",f.dia,f.mes,f.año);
    // enum DIA_SEMANA dia = MARTES;
    // printf("dia -> %f",dia);
    switch (f.dia_semana)
    {
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

