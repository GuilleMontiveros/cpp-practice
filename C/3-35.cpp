#include <stdio.h>

int main() {

    int numero;
    int d1, d2, d4, d5;

    printf("Introduzca un numero de cinco digitos: ");
    scanf("%d", &numero);

    d1 = numero / 10000;
    d2 = (numero / 1000) % 10;
    d4 = (numero / 10) % 10;
    d5 = numero % 10;

    if (d1 == d5 && d2 == d4) {
        printf("Es un palindromo\n");
    } else {
        printf("No es un palindromo\n");
    }

    return 0;
}
