#include <stdio.h>
//Programa para numeros par usando el resto
int main(void)
{
    int numero;

    printf("Ingrese un entero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0)
        printf("El numero es par\n");

    if (numero % 2 != 0)
        printf("El numero es impar\n");

    return 0;
}
