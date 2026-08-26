#include <stdio.h>

int main(){
int cont = 1;
int num;
int mayor;
while ( cont <= 10 ) {
        printf( "Introduzca numero: ");
        scanf( "%d", &num);
     // ponemos este para que el primer numero ingresado sea el mayor, ya que no hay con que compararlo, si contador es 1 guardamos el numero en la variable mayor
        if (cont == 1) {
            mayor = num;
        }
      else if   ( num > mayor ){ //
            mayor = num;
        }
    cont++;
}
printf("\nEl numero mas grande encontrado es: %d\n", mayor);
return 0;
}
