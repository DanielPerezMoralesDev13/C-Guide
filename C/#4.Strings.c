#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    // Strings
    char string[] = "Mi String";
    char otra_string[] = "Mi otro String";

    printf("%ld\n", strlen(string));
    printf("%ld\n", strlen(otra_string));
    printf("%s %s\n", string, otra_string);

    char nueva_linea_string[] = "Este es un String\ncon salto de línea";
    printf("%s\n", nueva_linea_string);

    char string_tabulada[] = "\tEste es un String con tabulación";
    printf("%s\n", string_tabulada);

    char escapar_string[] = "\\tEste es un String \\n escapado";
    printf("%s\n", escapar_string);

    // Formateo
    char nombre[] = "Daniel";
    char segundo_nombre[] = "Perez";
    int edad = 18;

    printf("Mi nombre es %s %s y mi edad es %d\n", nombre, segundo_nombre, edad);
    printf("Mi nombre es %s %s y mi edad es %d\n", nombre, segundo_nombre, edad);
    printf("Mi nombre es %s %s y mi edad es %d\n", nombre, segundo_nombre, edad);
    printf("Mi nombre es %s %s y mi edad es %d\n", nombre, segundo_nombre, edad);

    // Desempaqueado de caracteres
    char lenguage[] = "python";
    char a, b, c, d, e, f;
    a = lenguage[0];
    e = lenguage[4];
    printf("%c\n", a);
    printf("%c\n", e);

    // Slicing
    char lenguage_slice[3];
    strncpy(lenguage_slice, lenguage + 1, 2);
    lenguage_slice[2] = '\0';
    printf("%s\n", lenguage_slice);

    char lenguage_reversa[strlen(lenguage) + 1];
    int j = 0;
    for (int i = strlen(lenguage) - 1; i >= 0; i--) {
        lenguage_reversa[j] = lenguage[i];
        j++;
    }
    lenguage_reversa[j] = '\0';
    printf("%s\n", lenguage_reversa);

    // Métodos de strings
    char lenguage_capitalize[strlen(lenguage) + 1];
    strcpy(lenguage_capitalize, lenguage);
    lenguage_capitalize[0] = toupper(lenguage[0]);
    printf("%s\n", lenguage_capitalize);

    char lenguage_upper[strlen(lenguage) + 1];
    strcpy(lenguage_upper, lenguage);
    for (int i = 0; i < strlen(lenguage_upper); i++) {
        lenguage_upper[i] = toupper(lenguage[i]);
    }
    printf("%s\n", lenguage_upper);

    int count = 0;
    for (int i = 0; i < strlen(lenguage); i++) {
        if (lenguage[i] == 't') {
            count++;
        }
    }
    printf("%d\n", count);

    int alnum = 1;
    for (int i = 0; i < strlen(lenguage); i++) {
        if (!isalnum(lenguage[i])) {
            alnum = 0;
            break;
        }
    }
    printf("%d\n", alnum);

    char lenguage_lower[strlen(lenguage) + 1];
    strcpy(lenguage_lower, lenguage);
    for (int i = 0; i < strlen(lenguage_lower); i++) {
        lenguage_lower[i] = tolower(lenguage[i]);
    }
    printf("%s\n", lenguage_lower);

    printf("%d\n", strcmp(lenguage_lower, lenguage));

    printf("%d\n", strcmp("Py", lenguage));

    printf("%d\n", strcmp(lenguage, "on") == strlen(lenguage) - 2); // Comparing the last 2 characters

    // slicing[:]
    printf("%s\n", lenguage);
    printf("%s\n", lenguage);
    printf("%s\n", lenguage);
    return 0;
}
