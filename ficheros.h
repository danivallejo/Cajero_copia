#include "Tarjeta.h"
#include "Movimiento.h"
#include <stdio.h>

#ifndef _FICHEROS_H
#define _FICHEROS_H


int CantidadTarjetas();
void LeerTarjetas(t_tarjeta tarjetas[]);
void EscribirTarjetas(t_tarjeta tarjetas[], int CantidadTarjetas);
int CantidadMovimientos();
void LeerMovimientos(t_movimiento movimientos[]);
void EscribirMovimientos(t_movimiento movimientos[], int CantMovimientos);

#endif