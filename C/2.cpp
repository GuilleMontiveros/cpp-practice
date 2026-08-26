#include<stdio.h>
int main()
{
   int Aprobados = 0;
   int Reprobados = 0;
   int Estudiantes = 1;
   int resultado;

   while ( Estudiantes <= 10 ) {
      printf( "Introduzco el resultado ( 1=aprobado , 2=reprobado ): " );
      scanf( "%d" , &resultado);

    if ( resultado == 1 ) {
        Aprobados = Aprobados + 1;
    }
     else {
        Reprobados = Reprobados + 1;
     }

     Estudiantes = Estudiantes + 1;
   }
     printf( "Aprobados %d\n", Aprobados);
     printf( "Reprobados %d\n", Reprobados);

     if ( Aprobados > 8) {
        printf( "Objetivos Cumplido\n" );
     }
     return 0;

    }

