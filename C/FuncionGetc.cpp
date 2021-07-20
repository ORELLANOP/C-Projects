/* FUNCION GETC 

int getc(FILE *stream);

Esta función es equivalente a fgetc, excepto que si es implementado como una macro,
 puede evaluar stream más de una vez - el argumento debería ser una expresión sin efectos secundarios.
 
 VALOR DE RETORNO
 
 La función getc retorna el carácter siguiente desde el stream de entrada apuntado por stream.
  Si el stream está en el final de fichero, el indicador del final de fichero para el stream es activado y getc retorna EOF. 
  Si ocurre un error de lectura, el indicador de error para el stream es activado y getc retorna EOF.*/
  
#include <stdio.h>

int main()
{
   char nombre[10]="datos.dat";
   FILE *fichero;
   int i;

   fichero = fopen( nombre, "r" );
   printf( "Fichero: %s -> ", nombre );
   if( fichero )
      printf( "existe (ABIERTO)\n" );
   else
   {
      printf( "Error (NO ABIERTO)\n" );
      return 1;
   }

   printf( "Los 18 primeros caracteres del fichero: %s\n\n", nombre );
   for( i=1; i<=18; i++)   printf( "%c", getc(fichero) );

   if( !fclose(fichero) )
      printf( "\nFichero cerrado\n" );
   else
   {
      printf( "\nError: fichero NO CERRADO\n" );
      return 1;
   }

   return 0;
}
