#include <stdio.h>

int main() {
    int contador = 1;
    int numero;
    int mayor1 = 0; // Guardará el número más grande
    int mayor2 = 0; // Guardará el segundo más grande

    while (contador <= 10) {
        printf("Introduzca el numero %d: ", contador);
        scanf("%d", &numero);

        // Si es el primer número ingresado
        if (contador == 1) {
            mayor1 = numero;
        }
        // Si es el segundo número ingresado
        else if (contador == 2) {
            if (numero > mayor1) {
                mayor2 = mayor1;
                mayor1 = numero;
            } else {
                mayor2 = numero;
            }
        }
        // A partir del tercer número
        else {
            if (numero > mayor1) {
                // Si encontramos un nuevo "rey", el anterior pasa a ser el segundo
                mayor2 = mayor1;
                mayor1 = numero;
            } else if (numero > mayor2) {
                // Si no supera al rey, pero sí supera al segundo, lo actualizamos
                mayor2 = numero;
            }
        }

        contador++;
    }

    printf("\nEl valor mas grande es: %d\n", mayor1);
    printf("El segundo valor mas grande es: %d\n", mayor2);

    return 0;
}
