#include <stdio.h>

int main() {
    FILE *file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("El archivo no se pudo abrir.\n");
        return 1;
    }

    // Cerrar el archivo al final
    fclose(file);

    return 0;
}