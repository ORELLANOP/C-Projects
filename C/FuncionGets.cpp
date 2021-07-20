/*
FUNCION GETS

char *gets(char *cadena);

Esta funci�n lee caracteres desde el stream apuntado por stream stdin, en el array apuntado por cadena,
hasta que se encuentre un final de fichero (EOF) o un car�cter de l�nea nueva es le�do. 
 Cualquier car�cter de l�nea nueva es descartado, y un car�cter nulo es escrito inmediatamente despu�s del �ltimo car�cter le�do en el array.
 
 VALOR DE RETORNO
 
 La funci�n gets retorna cadena si es realizada con �xito.
  Si un final de fichero (EOF) es encontrado y ning�n car�cter ha sido le�do en el array,
entonces el contenido del array permanece invariable y un puntero nulo es retornado.
  Si ocurre un error de lectura durante el proceso, el contenido del array es indeterminado y un puntero nulo es retornado.*/



#include <stdio.h>

int main()
{
   char oracion[81];

   printf( "Escribe una oracion:\n");
   printf( "\nHas escrito: \"%s\"\n", gets(oracion) );

   return 0;
}
