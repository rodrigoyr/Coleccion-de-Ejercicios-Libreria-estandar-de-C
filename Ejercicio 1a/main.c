#include <stdlib.h>
#include <stdio.h>

int main() {
    int num;

    printf("Ingresa un número: ");
    scanf("%d", &num);

    int abs_num = abs(num);
    printf("El valor absoluto de %d es %d\n", num, abs_num);

    return 0;
}
