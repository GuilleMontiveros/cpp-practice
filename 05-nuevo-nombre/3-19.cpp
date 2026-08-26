/* Esquema de comisiones
vendedores = $200 semanales 7 dias, + 9% de sus ventas totales durante la semana osea promedio de todas las ventas
ventas totales de cada vendedor durante la ultima semana y calcule los ingresos y despligue los ingresos de ese vendedor
*/

#include<stdio.h>
int main()
{
    float ventas, salario;

    printf( "Introduzca las ventas en pesos (-1 para terminar): " );
    scanf( "%f" , &ventas );

    while (ventas != -1 ) {
        salario = 200 + 0.09 * ventas; //calculo del porcentaje de ventas

        printf(" El salario es: $%.2f\n ", salario);


       printf( "Introduzca las ventas en pesos (-1 para terminar): " );
        scanf( "%f" , &ventas );

    }
    return 0;

}
