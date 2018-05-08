#include "Movimiento.h"
#include "Tarjeta.h"

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define TIPO1 "Saca"
#define TIPO2 "ingreso"
#define TIPO3 "transferencia"

#define MAX_NUM 1


void SacarDinero(t_tarjeta * TarjetaIntroducida, t_movimiento movimientos[], int CantMovimientos) 
{
	//FILE* FicheroMov;
	//FILE* FicheroTar;
	int importe;
//	int CantidadTarjetas;
//	int CantidadMovimientos;
//	t_tarjeta *tarjetas;
//	t_movimiento *movimientos;

//	LeerMovimentos();
/*
	FicheroMov = fopen("Movimientos.dat", "rb");

	CantidadMovimientos = fgetc(FicheroMov);

 	//crear memoria para guardar los datos
 	 movimientos = (t_movimiento*) malloc(100 * sizeof(t_movimiento));	
  
  	//leer los datos del binario al array
 
 	fread(movimientos, sizeof(t_movimiento), CantidadMovimientos, FicheroMov);
*/	
	do
	{
		printf("\nSeleccione el importe que desea retirar: Por motivos de seguridad no se pueden sacar mas de mil euros\n");

		scanf("%i", &importe);

		if( importe > TarjetaIntroducida -> Saldo )
		{
			printf(" \n El importe que deseas sacar es mayor que el saldo disponible \n");
		}

	}while(importe > 1000||importe < 0 || importe > TarjetaIntroducida -> Saldo);

	printf ("Ha retirado: %i€", importe);

	//FicheroMov = fopen("Movimientos.dat", "wb");

	//CantidadMovimientos = fgetc(FicheroMov);

	movimientos[CantMovimientos].numTarjeta1 = TarjetaIntroducida -> numTarjeta;
 	movimientos[CantMovimientos].numTarjeta2 = 0;
 	movimientos[CantMovimientos].TipoMovimiento[15] = TIPO1;
	movimientos[CantMovimientos].Cantidad = importe;

	TarjetaIntroducida -> Saldo = TarjetaIntroducida -> Saldo - importe;
	
	CantMovimientos++;

	EscribirMovimientos(movimientos, CantMovimientos);
/*
	fputc(CantidadMovimientos, FicheroMov);

	fwrite(movimientos, sizeof(t_movimiento), CantidadMovimientos, FicheroMov);

	fclose(FicheroMov);

*/
/*
	for(int i = 0; i < CantidadTarjetas; i++)
	{
		if(TarjetaIntroducida.numTarjeta == tarjetas[i].numTarjeta)
		{
			tarjetas[i].Saldo = tarjetas[i].Saldo + importe;
		}
	}

	fputc(CantidadTarjetas, FicheroTar);

	fwrite (tarjetas, sizeof (t_tarjeta), CantidadTarjetas, FicheroTar);

	fclose (FicheroTar);
 */
}

void MeterDinero(t_tarjeta * TarjetaIntroducida, t_movimiento movimientos[], int CantMovimientos)
{
	//LEEMOS DE FICHERO EN UN ARRAY

	//FILE* FicheroMov;
	//FILE* FicheroTar;
	int importe;
	//int CantidadTarjetas;
	//t_tarjeta* tarjetas;
	//t_movimiento *movimientos;
 


	//LeerTarjetas();

 /*
	FicheroTar = fopen ("registro.dat", "rb");

	CantidadTarjetas = fgetc(FicheroTar);
  
  	//crear memoria para guardar los datos
 	 tarjetas = (t_tarjeta*)malloc(100 * sizeof(t_tarjeta));	
  
  	//leer los datos del binario al array
 
 	fread(tarjetas, sizeof(t_tarjeta), CantidadTarjetas, FicheroTar);
 */
 	printf("\n ¿Cuanto dinero desea ingresar? \n");
 
 	scanf ("%i", &importe);
/*
 	FicheroMov = fopen("Movimientos.dat", "wb");

 	int CantidadMovimientos;

 	CantidadMovimientos = fgetc(FicheroMov);
 	//Modificamos el fichero
 */
	movimientos[CantMovimientos].numTarjeta1 = TarjetaIntroducida -> numTarjeta;
 	movimientos[CantMovimientos].numTarjeta2 = 0;
 	movimientos[CantMovimientos].TipoMovimiento[15] = TIPO2;
	movimientos[CantMovimientos].Cantidad = importe;
	
	TarjetaIntroducida -> Saldo = TarjetaIntroducida -> Saldo + importe;
	
	CantMovimientos++;

	EscribirMovimientos(movimientos, CantMovimientos);
 
}
void ConsultarMovimiento(t_tarjeta * TarjetaIntroducida, t_movimiento movimientos[], int CantMovimientos)
{
//	FILE* FicheroMov;
//	int importe;
//	int CantidadMovimientos;
//	int i;
	//t_movimiento *movimientos;

	//LeerMovimentos();
/*
	FicheroMov = fopen("Movimientos.dat", "rb");

	CantidadMovimientos = fgetc(FicheroMov);
  
  	//crear memoria para guardar los datos
 	 movimientos = (t_movimiento*)malloc(CantidadMovimientos*sizeof(t_movimiento));
  
  	//leer los datos del binario al array
  	fread(movimientos, sizeof(t_movimiento), CantidadMovimientos, FicheroMov);
*/
  	for(int i = 0; i < CantMovimientos; i++ )
  	{
  		if(TarjetaIntroducida -> numTarjeta == movimientos[i].numTarjeta1 || TarjetaIntroducida -> numTarjeta == movimientos[i].numTarjeta2)
  		{
  			printf("\n La tarjeta %i ha realizado un/a %s por el importe de %i \n", movimientos[i].numTarjeta1, movimientos[i].TipoMovimiento, movimientos[i].Cantidad);
  		}

  	}

  //	fclose(FicheroMov);
}
void Salir2(t_movimiento movimientos[], int CantMovimientos)
{
	EscribirMovimientos(movimientos, CantMovimientos);
}
/*
void Transferencia(t_tarjeta TarjetaIntroducida, t_tarjeta tarjetas[], int CantTarjetas, t_movimiento movimientos[], int CantMovimientos)
{	
	//FILE* FicheroMov;
	//FILE* FicheroTar;
	int importe;
	int i;
	int x;
	int aux;
	//int CantidadTarjetas;
	//int CantidadMovimientos;
	//t_tarjeta *tarjetas;
	//t_movimiento *movimientos;
	int numTarjeta2;

	//FicheroMov = fopen("Movimientos.dat", "wb");

	//LeerTarjeta();

	FicheroTar = fopen ("registro.dat", "r+b");

	CantidadTarjetas = fgetc(FicheroTar);
  
  	//crear memoria para guardar los datos
 	 tarjetas = (t_tarjeta*)malloc(CantidadTarjetas * sizeof(t_tarjeta));	
  
  	//leer los datos del binario al array
 
 	fread(tarjetas, sizeof(t_tarjeta), CantidadTarjetas, FicheroTar);
	
	do
	{
		printf("\nSeleccione el importe que desea transferir. \n");

		scanf("%i", &importe);

		if( importe > TarjetaIntroducida.Saldo )
		{
			printf(" \n El importe que deseas trasnferir es mayor que el saldo disponible \n");
		}

	}while(importe > TarjetaIntroducida.Saldo);

	do
	{
		printf(" \n Introduce el número de la tarjeta a la que desea hacer la transferencia \n");
		scanf ("%i", &numTarjeta2);

		aux = 0;

		for(i = 0; i < CantTarjetas; i++)
		{
			if(numTarjeta2 == tarjetas[i].numTarjeta)
			{

			movimientos[CantMovimientos].numTarjeta1 = TarjetaIntroducida.numTarjeta;
 			movimientos[CantMovimientos].numTarjeta2 = tarjetas[i].numTarjeta;
 			movimientos[CantMovimientos].TipoMovimiento[15] = TIPO3;
			movimientos[CantMovimientos].Cantidad = importe;
	
			EscribirMovimientos(movimientos, CantMovimientos);

			tarjetas[i].Saldo = tarjetas[i].Saldo + importe;

			for(x = 0; x < CantTarjetas; x++)
				{
					if(TarjetaIntroducida.numTarjeta == tarjetas[x].numTarjeta)
					{
						tarjetas[x].Saldo = tarjetas[x].Saldo - importe;

						printf("\n La transferencia se ha realizado con éxito \n");
					}
				}

			}else
			{
				printf(" \n El número de la tarjeta que recibe la transferencia no existe en nuestros servidores\n");

				aux = 1;
			}
		}

		EscribirTarjetas(tarjetas, CantTarjetas);

	}while(aux = 1);

}
*/
