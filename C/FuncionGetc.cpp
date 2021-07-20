/* FUNCION GETC 

int getc(FILE *stream);

Esta funci�n es equivalente a fgetc, excepto que si es implementado como una macro,
 puede evaluar stream m�s de una vez - el argumento deber�a ser una expresi�n sin efectos secundarios.
 
 VALOR DE RETORNO
 
 La funci�n getc retorna el car�cter siguiente desde el stream de entrada apuntado por stream.
  Si el stream est� en el final de fichero, el indicador del final de fichero para el stream es activado y getc retorna EOF. 
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
