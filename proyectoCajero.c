#include "Tarjeta.h"
#include "Movimiento.h"

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	printf("Empezamos\n");
	int a;

	t_tarjeta TarjetaIntroducida;

	int CantTarjetas = CantidadTarjetas();
	t_tarjeta *tarjetas = (t_tarjeta *) malloc (100 * sizeof(t_tarjeta));

	LeerTarjetas(tarjetas);
 
	do 

	{
		printf("\n Este es el menu principal. Seleccione que operación desea realizar:\n 1. Alta Tarjeta. 2.Introducir Tarjeta. 3.Salir. \n");

		scanf ("%i", &a);

		switch (a)
		{
			case 1:
			AltaTarjeta(tarjetas, CantTarjetas);
			break;
			case 2: 
			IntroducirTarjeta(tarjetas, CantTarjetas);
			break;
			case 3:
			Salir();
			break;
		}
	}while(a != 3);

return 0;
}

