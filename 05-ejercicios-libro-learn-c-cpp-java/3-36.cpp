#include <stdio.h>

int main() {
    int numero_binario;
    int numero_decimal = 0;
    int valor_posicion = 1; // Representa 2^0, 2^1, 2^2, etc.

    printf("Introduzca un numero entero que contenga solo unos y ceros: ");
    scanf("%d", &numero_binario);

    while (numero_binario > 0) {
        int ultimo_digito = numero_binario % 10; // Extrae el último dígito
        numero_decimal += ultimo_digito * valor_posicion;

        numero_binario /= 10; // Elimina el último dígito
        valor_posicion *= 2;  // Avanza a la siguiente posición binaria
    }

    printf("El equivalente decimal es: %d\n", numero_decimal);

    return 0;
}
























