#ifndef COLOR
#define COLOR true

static char TOTAL_COLORES[][9] = {
    "negro",
    "rojo",
    "verde",
    "amarillo",
    "azul",
    "magneta",
    "cyan",
    "blanco"
};

struct ListaColor{
    char *negro;
    char *rojo;
    char *verde;
    char *amarillo;
    char *azul;
    char *magneta;
    char *cyan;
    char *blanco;
};

struct ListaEstilo{
    char *reset;
    char *negrita;
    char *subrayado;
    char *parpadeante;
    char *invertido;
    char *oculto;
};

struct ListaFondos{
    char *negro;
    char *rojo;
    char *verde;
    char *amarillo;
    char *azul;
    char *magneta;
    char *cyan;
    char *blanco;
};

typedef struct ListaColor Color;
typedef struct ListaEstilo StyleColor;
typedef struct ListaFondos BackgroundColor;


char *Colorear(char *color);
char *Colorear(char *color){
    convertirMayusculas(color);
    for (int i = 0; i < (sizeof(TOTAL_COLORES) / sizeof(TOTAL_COLORES[0])); i++){
        if (strcmp(color,TOTAL_COLORES[i]) == 0){
            break;
        }
        continue;
    }
    
    return "";
}
char *Background(char *background);
char *Style(char *style);


#endif