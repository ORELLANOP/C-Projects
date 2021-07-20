/*
FUNCION GETS

char *gets(char *cadena);

Esta función lee caracteres desde el stream apuntado por stream stdin, en el array apuntado por cadena,
hasta que se encuentre un final de fichero (EOF) o un carácter de línea nueva es leído. 
 Cualquier carácter de línea nueva es descartado, y un carácter nulo es escrito inmediatamente después del último carácter leído en el array.
 
 VALOR DE RETORNO
 
 La función gets retorna cadena si es realizada con éxito.
  Si un final de fichero (EOF) es encontrado y ningún carácter ha sido leído en el array,
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
