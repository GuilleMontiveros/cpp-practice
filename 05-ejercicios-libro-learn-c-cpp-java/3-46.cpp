/*Una empresa quiere transmitir datos mediante la línea telefónica, pero les preocupa que sus teléfonos pudieran es￾tar intervenidos. Todos sus datos se transmiten como enteros de cuatro dígitos. A usted le pidieron que escriba un
programa que encripte sus datos de manera que se transmitan de forma más segura. El programa debe leer un en￾tero de cuatro dígitos y encriptar la información de la siguiente manera: reemplace cada dígito con el residuo de la
división entre 10 de la suma de dicho dígito más 7. Posteriormente, intercambie el primer dígito con el tercero, e
intercambie el segundo dígito con el cuarto. Luego despliegue el entero encriptado. Escriba un programa por sepa￾rado que introduzca un entero encriptado de cuatro dígitos y lo desencripte para formar el número original.*/
#include <stdio.h>

int main(void)
{
    int numero;
    int primero, segundo, tercero, cuarto;
    int temp;

    printf("Ingrese un numero de cuatro digitos: ");
    scanf("%d", &numero);

    // Extraer los digitos
    primero = numero / 1000;
    segundo = (numero / 100) % 10;
    tercero = (numero / 10) % 10;
    cuarto = numero % 10;

    // Cifrar cada digito
    primero = (primero + 7) % 10;
    segundo = (segundo + 7) % 10;
    tercero = (tercero + 7) % 10;
    cuarto = (cuarto + 7) % 10;

    // Intercambiar primero con tercero
    temp = primero;
    primero = tercero;
    tercero = temp;

    // Intercambiar segundo con cuarto
    temp = segundo;
    segundo = cuarto;
    cuarto = temp;

    // Mostrar numero cifrado
    printf("Numero cifrado: %d%d%d%d\n",
           primero, segundo, tercero, cuarto);

    return 0;
}
