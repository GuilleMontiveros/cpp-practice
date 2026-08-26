#include <stdio.h>

int main(void)
{
    int numero;
    int primero, segundo, tercero, cuarto;
    int temp;

    printf("Ingrese el numero cifrado de cuatro digitos: ");
    scanf("%d", &numero);

    // Extraer los digitos
    primero = numero / 1000;
    segundo = (numero / 100) % 10;
    tercero = (numero / 10) % 10;
    cuarto = numero % 10;

    // Deshacer los intercambios
    temp = primero;
    primero = tercero;
    tercero = temp;

    temp = segundo;
    segundo = cuarto;
    cuarto = temp;

    // Deshacer el cifrado
    primero = (primero + 3) % 10;
    segundo = (segundo + 3) % 10;
    tercero = (tercero + 3) % 10;
    cuarto = (cuarto + 3) % 10;

    // Mostrar numero original
    printf("Numero original: %d%d%d%d\n",
           primero, segundo, tercero, cuarto);

    return 0;
}
