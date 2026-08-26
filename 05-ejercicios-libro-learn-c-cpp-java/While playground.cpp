#include<stdio.h>

int main(){
int num;
int suma = 0 ;
printf("Introduzca un numero de mas 1 digito: ");
scanf( "%d", &num);

while ( num !=0  ){
    suma += (num % 10) ;
    num/= 10;
}
printf("La suma de los digitos es: %d\n", suma);
return 0;

}
