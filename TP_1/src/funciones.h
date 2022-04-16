/*
 * funciones.h
 *
 *  Created on: 10 abr. 2022
 *      Author: Fabri
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_

/// @brief Pide un numero entero y lo guarda en un puntero
///
/// @param pNumeroIngresado el puntero a donde se va a guardar el numero ingresado
/// @param mensaje Es el mensaje que se le va a mostrar al usuario
/// @param mensajeError Mensaje de error a mostrar
/// @param maximo entero maximo
/// @param minimo entero minimo
/// @param maximoDeReintentos cantidad de reintentos
/// @return

int getInt(int * pNumeroIngresado,char * mensaje,char * mensajeError,int maximo, int minimo, int maximoDeReintentos);

/// @brief Pide un numero flotante y lo guarda en un puntero
///
/// @param pNumeroIngresado el puntero a donde se va a guardar el numero ingresado
/// @param mensaje Es el mensaje que se le va a mostrar al usuario
/// @param mensajeError Mensaje de error a mostrar
/// @param maximo entero maximo
/// @param minimo entero minimo
/// @param maximoDeReintentos cantidad de reintentos
/// @return

int getFloat(float * pNumeroIngresado,char * mensaje,char * mensajeError,float maximo, float minimo, int maximoDeReintentos);

/// @brief calcula un precio con un descuento
///
/// @param numero es el numero sin el descuento
/// @param descuento el descuento que se desea aplicar
/// @param resultado puntero a donde se guardar el resultado
/// @return

int getDescuento(float numero, float descuento, float * resultado);

/// @brief calcula un precio con recargo
///
/// @param numero numero al cual se le va a aplicar el recargo
/// @param recargo recargo que va a ser aplicado
/// @param resultado puntero a donde se va a guardar el resultado
/// @return

int getRecargo(float numero, float recargo, float * resultado);

/// @brief cambia el precio a otra divisa
///
/// @param numero es el numero que se quiere pasar a otra divisa
/// @param otraDivisa es la cotizacion de la otra divisa
/// @param resultado puntero a donde guarda el resultado
/// @return

int getOtraDivisa(float numero, float otraDivisa,float  * resultado);

/// @brief calcula el valor unitario de algo
///
/// @param precio es el valor total
/// @param cantidad es la cantidad
/// @param resultado puntero donde guarda el resultado
/// @return

int getUnitario(float precio, float cantidad, float * resultado);

/// @brief calcula una diferencia
///
/// @param precio1	se ingresa el valor 1
/// @param precio2 se ingresa el valor 2
/// @param resultado guarda la diferencia en un puntero
/// @return

int getDiferencia(float precio1, float precio2, float * resultado);

#endif /* FUNCIONES_H_ */
