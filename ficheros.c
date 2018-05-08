#include "ficheros.h"

int CantidadTarjetas()
{
	FILE * fd;
	int num = 0; 

	fd = fopen("registro.dat", "rb");

	if(!fd)
	{
		printf("Error al abrir el fichero\n");
	}
	else
	{
		num=fgetc(fd);
	}
	
	return num;
}
void LeerTarjetas(t_tarjeta tarjetas[])
{
	int CantidadTarjetas;
	FILE* fd;

	fd = fopen("registro.dat", "rb");
	 //leer la cantidad de elementos
  
	if(!fd)
	{
		printf("Error al abrir el fichero\n");
	}
	else
	{

  	CantidadTarjetas = fgetc(fd);

  	if(CantidadTarjetas == -1)
  	{
  		CantidadTarjetas++;
  	}

  	printf ("%i\n", CantidadTarjetas);
  /*
  	//crear memoria para guardar los datos
 	tarjetas = (t_tarjeta*)malloc(100 * sizeof(t_tarjeta));	
  */
  	//leer los datos del binario al array
 
 	fread(tarjetas, sizeof(t_tarjeta), CantidadTarjetas, fd);
 		
 //fclose(fd);
	}

}
void EscribirTarjetas(t_tarjeta tarjetas[], int CantidadTarjetas)
{
	FILE *fd;

	fd = fopen("registro.dat", "wb");

	if(!fd)
	{
		printf("Error al abrir el fichero\n");
	}
	else
	{
/*
	CantidadTarjetas = fgetc(fd);

	CantidadTarjetas++;
*/
	fputc(CantidadTarjetas, fd);

	fwrite(tarjetas, sizeof(t_tarjeta), CantidadTarjetas, fd);

	}	
	
//	fclose(fd);

}
int CantidadMovimientos()
{
	FILE * fd;
	int num = 0; 

	fd = fopen("Movimientos.dat", "rb");

	if(!fd)
	{
		printf("Error al abrir el fichero\n");
	}
	else
	{
		num=fgetc(fd);
	}
	
	return num;
}
void LeerMovimientos(t_movimiento movimientos[])
{
	int CantidadMovimientos;
	FILE* fd;

	fd = fopen("movimientos.dat", "rb");
	 //leer la cantidad de elementos
  
	if(!fd)
	{
		printf("Error al abrir el fichero\n");
	}
	else
	{

  	CantidadMovimientos = fgetc(fd);

  	if(CantidadMovimientos == -1)
  	{
  		CantidadMovimientos++;
  	}

  	printf ("%i\n", CantidadMovimientos);
  /*
  	//crear memoria para guardar los datos
 	tarjetas = (t_tarjeta*)malloc(100 * sizeof(t_tarjeta));	
  */
  	//leer los datos del binario al array
 
 	fread(movimientos, sizeof(t_movimiento), CantidadMovimientos, fd);
 		
 //fclose(fd);
	}

}
void EscribirMovimientos(t_movimiento movimientos[], int CantidadMovimientos)
{
	FILE *fd;

	fd = fopen("Movimientos.dat", "wb");

	if(!fd)
	{
		printf("Error al abrir el fichero\n");
	}
	else
	{
/*
	CantidadTarjetas = fgetc(fd);

	CantidadTarjetas++;
*/
	fputc(CantidadMovimientos, fd);

	fwrite(movimientos, sizeof(t_movimiento), CantidadMovimientos, fd);

	}	
	
//	fclose(fd);

}