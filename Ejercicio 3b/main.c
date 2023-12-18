#include <stdio.h>
#include <stdlib.h>

int main() {
    const char *filename = "file.txt";
    FILE *file = fopen(filename, "w");

    if (file == NULL) {
        printf("No se pudo abrir el archivo '%s' para escritura.\n", filename);
        return 1;
    }

    fprintf(file, "Hola, mundo!\n");

    fclose(file);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("No se pudo abrir el archivo '%s' para lectura.\n", filename);
        return 1;
    }

    char buffer[50];

    if (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("Leído del archivo: %s", buffer);
    } else {
        printf("Error al leer del archivo.\n");
    }

    fclose(file);

    return 0;
}
