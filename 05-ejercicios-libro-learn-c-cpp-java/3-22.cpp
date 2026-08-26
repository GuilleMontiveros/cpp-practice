/*Escriba un programa que demuestre la diferencia entre el predecremento y el posdecremento mediante el uso del
operador --.*/
#include <stdio.h>

int main() {
    int x;

    // Demostración de posdecremento
    x = 5;
    printf("--- Posdecremento ---\n");
    printf("Valor inicial de x: %d\n", x);
    printf("Imprimiendo x--: %d\n", x--); // Imprime primero, luego resta
    printf("Valor de x despues del posdecremento: %d\n\n", x);

    // Demostración de predecremento
    x = 5;
    printf("--- Predecremento ---\n");
    printf("Valor inicial de x: %d\n", x);
    printf("Imprimiendo --x: %d\n", --x); // Resta primero, luego imprime
    printf("Valor de x despues del predecremento: %d\n", x);

    return 0;
}
