#include <string.h>
#include <stdio.h>

int main() {
    const char *str1 = "Holaa";
    const char *str2 = "Munditooo";

    int comparison = strncmp(str1, str2, strlen(str1));

    if (comparison == 0) {
        printf("Las cadenas son iguales.\n");
    } else {
        printf("Las cadenas son diferentes.\n");
    }

    return 0;
}
