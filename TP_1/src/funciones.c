/*
 * funciones.c
 *
 *  Created on: 10 abr. 2022
 *      Author: Fabri
 */

#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>

int getInt(int * pNumeroIngresado,char * mensaje,char * mensajeError,
		int maximo, int minimo, int maximoDeReintentos){

	int auxNumeroIngresado;
	int retorno;
	retorno = -1;

	if(pNumeroIngresado != NULL && maximo >= minimo && maximoDeReintentos>= 0){
		do{
			printf("%s", mensaje);
			scanf("%d", &auxNumeroIngresado);
			maximoDeReintentos--;

			if(auxNumeroIngresado >= minimo && auxNumeroIngresado <= maximo){
						*pNumeroIngresado = auxNumeroIngresado;
						retorno = 0;
						break;
			}else{
				printf("%s", mensajeError);
			}

		}while(maximoDeReintentos > 0);
	}

	return retorno;
}

int getFloat(float * pNumeroIngresado,char * mensaje,char * mensajeError,
		float maximo, float minimo, int maximoDeReintentos){

	float auxNumeroIngresado;
	int retorno;
	retorno = -1;

	if(pNumeroIngresado != NULL && maximo >= minimo && maximoDeReintentos>= 0){
		do{
			printf("%s", mensaje);
			scanf("%f", &auxNumeroIngresado);
			maximoDeReintentos--;

			if(auxNumeroIngresado >= minimo && auxNumeroIngresado <= maximo){
						*pNumeroIngresado = auxNumeroIngresado;
						retorno = 0;
						break;
			}else{
				printf("%s", mensajeError);
			}

		}while(maximoDeReintentos > 0);
	}

	return retorno;
}

int getDescuento(float numero, float descuento, float * resultado){

	*resultado = numero - (numero / 100 * descuento);

	return 0;
}

int getRecargo(float numero, float recargo, float * resultado){

	*resultado = numero + (recargo * numero / 100);

	return 0;
}

int getOtraDivisa(float numero, float otraDivisa, float * resultado){

	*resultado = numero / otraDivisa;

	return 0;
}

int getUnitario(float precio, float cantidad, float * resultado){

	*resultado = precio / cantidad;

	return 0;
}

int getDiferencia(float precio1, float precio2, float * resultado){
	if(precio1 > precio2){
		*resultado = precio1 - precio2;
		}
	else if (precio2 > precio1){
		*resultado = precio2 - precio1;
	}
	else{
		*resultado = 0;
	}
	return 0;
}


