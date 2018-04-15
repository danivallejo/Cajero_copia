#include "Tarjeta.h"

#ifndef _MOVIMIENTO_H
#define _MOVIMIENTO_H

typedef struct
{
	int numTarjeta1;
	int numTarjeta2;
	char TipoMovimiento[15];
	int Cantidad;

} t_movimiento;

int CantidadMovimientos();
void LeerMovimientos(t_movimiento movimientos[]);
void EscribirMovimientos(t_movimiento movimientos[], int CantMovimientos);
void ConsultarMovimiento(t_tarjeta * TarjetaIntroducida, t_movimiento movimientos[], int CantMovimientos);
//void Transferencia(t_tarjeta TarjetaIntroducida, t_tarjeta tarjetas[], int CantTarjetas, t_movimiento movimientos[], int CantMovimientos);
void SacarDinero(t_tarjeta * TarjetaIntroducida, t_movimiento movimientos[], int CantMovimientos);
void MeterDinero(t_tarjeta * TarjetaIntroducida, t_movimiento movimientos[], int CantMovimientos);
//void Salir2(t_movimiento movimientos[], int CantMovimientos);
#endif