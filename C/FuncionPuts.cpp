/* FUNCION PUTS

int puts(const char *cadena);

Esta funci�n escribe la cadena apuntado por cadena en el stream apuntado por stdout,
 y a�ade un car�cter de l�nea nueva a la salida. El car�cter nulo final no es escrito.
 
 VALOR DE RETORNO
 
 La funci�n puts retorna EOF si ocurre un error de escritura; si no, entonces retorna un valor no negativo.*/



#include <stdio.h>

int main()
{
   char oracion[47] = "Esto es un ejemplo para usar la funcion puts";

   if( puts( oracion ) > 0 )  
   
    printf( "\nEl ejemplo ha funcionado correctamente\n" );
    
   else   
   
   printf( "\nERROR: La funcion no se ha realizado correctamente\n" );

   return 0;
}
