/* FUNCION PUTC

int putc(int c, FILE *stream);

Esta funci�n es equivalente a fputc, excepto que si es implementado como una macro,
 puede evaluar stream m�s de una vez - el argumento deber�a ser una expresi�n sin efectos secundarios.
 
VALOR DE RETORNO

La funci�n putc retorna el car�cter escrito. Si ocurre un error de escritura, el indicador de error para el stream es activado y putc retorna EOF.*/


#include <stdio.h>

int main()
{
	int i;
   char nombre[11]="datos2.dat";
   FILE *fichero;

   fichero = fopen( nombre, "w" );
   printf( "Fichero: %s -> ", nombre );
   if( fichero )
      printf( "creado (ABIERTO)\n" );
   else
   {
      printf( "Error (NO ABIERTO)\n" );
      return 1;
   }

   for( i=0; i<25; i++ )   putc( i+'a', fichero );

   if( !fclose(fichero) )
      printf( "\nFichero cerrado\n" );
   else
   {
      printf( "\nError: fichero NO CERRADO\n" );
      return 1;
   }

   return 0;
}
