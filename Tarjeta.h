#ifndef _TARJETA_H
#define _TARJETA_H

typedef struct
{
	int numTarjeta;
	int Password;
	int Saldo;
} t_tarjeta;

int CantidadTarjetas();
void LeerTarjetas(t_tarjeta tarjetas[]);
void EscribirTarjetas(t_tarjeta tarjetas[], int CantidadTarjetas);
void AltaTarjeta();
void IntroducirTarjeta();
void ConsultarSaldo(t_tarjeta * TarjetaIntroducida);
void Salir();
//void print(t_tarjeta *t)

#endif