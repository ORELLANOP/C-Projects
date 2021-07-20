/* Funcion GETCHAR
int getchar(void);
Esta función es equivalente a getc con el argumento stdin.

VALOR DE RETORNO
La función getchar retorna el carácter siguiente desde el stream de entrada apuntado por stream.
Si el stream está en el final de fichero, el indicador del final de fichero para el stream es activado y getchar retorna EOF.
Si ocurre un error de lectura, el indicador de error para el stream es activado y getchar retorna EOF.*/
  
  #include <stdio.h>

int main()
{
   char nombre[20]="";
   int i;

   printf( "Elige el numero en el menu:\n\n" );
   printf( "1 - Cargar fichero\n" );
   printf( "2 - Guardar en un fichero\n" );
   printf( "3 - Otras operaciones\n" );
   printf( "4 - Mostrar datos\n" );
   printf( "0 - Salir\n\n" );
   printf( "Opcion: " );
   printf( "\nHas elegido: %c", getchar() ); //Getchar va a devolver el primer caracter de todo lo que el usuario escriba acá, sea un numero o una letra etc.
   return 0;
}
