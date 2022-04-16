/*
 ============================================================================
 Name        : Trabajo.c
 Author      : Fabrizio Montserrat
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(void) {
	setbuf(stdout,NULL);
	int km = 0;
	float precioAerolineas = 0;
	float precioLatam = 0;
	char mostrarMenu = 's';
	int validacionRetorno;
	int opcionDelMenu;
	char mostrarMenuVuelos = 's';
	char calculo = 'n';
	int opcionDelMenuVuelos;
	float debitoAerolineas;
	float creditoAerolineas;
	float bitcoinAerolineas;
	float preciokmAerolineas;
	float debitoLatam;
	float creditoLatam;
	float bitcoinLatam;
	float preciokmLatam;
	int recargo = 25;
	int descuento = 10;
	float bitcoin = 4606954.55;
	float diferencia;
	int kmForzado = 7090;
	float precioAerolineasForzado = 162965;
	float precioLatamForzado = 159339;
	float debitoAerolineasForzado;
	float creditoAerolineasForzado;
	float bitcoinAerolineasForzado;
	float preciokmAerolineasForzado;
	float debitoLatamForzado;
	float creditoLatamForzado;
	float bitcoinLatamForzado;
	float preciokmLatamForzado;
	float diferenciaForzado;


		while (mostrarMenu == 's'){

			printf("		MENU		\n");
			printf("1 = Ingresar kilometros (km = %d)\n",km);
			printf("2 = Ingresar precio de vuelos (Aerolineas = $%.2f, Latam = $%.2f)\n",precioAerolineas,precioLatam);
			printf("3 = Calcular todos los costos\n");
			printf("4 = Informar resultados\n");
			printf("5 = Carga forzada\n");
			printf("6 = Salir\n");

			validacionRetorno = getInt(&opcionDelMenu,"Ingrese una opcion:\n"
								,"La opcion es incorrecta:\n",6,1,1);
			if(validacionRetorno == 0){
						switch(opcionDelMenu){
						case 1:
								validacionRetorno = getInt(&km,"Ingrese la cantidad de kilometros a viajar: (maximo 16.000 New York - Singapur)\n"
								,"La distancia ingresada es incorrecta:\n",16000,1,2);

									if(validacionRetorno == 0){
													printf("Los km se guardaron correctamente\n");
													calculo = 'n';
												}
									else{
													printf("Los km no fueron ingresados correctamente\n");
												}
						break;

						case 2:
							while (mostrarMenuVuelos == 's'){
								printf("		MENU DE VUELOS		\n");
								printf("1 = Ingresar valor aerolineas (valor = $%.2f)\n",precioAerolineas);
								printf("2 = Ingresar valor Latam (valor = $%.2f)\n",precioLatam);
								printf("3 = VOLVER\n");

								validacionRetorno = getInt(&opcionDelMenuVuelos,"Ingrese una opcion:\n"
								,"La opcion es incorrecta:\n",3,1,1);

								switch(opcionDelMenuVuelos){
									case 1:
										validacionRetorno = getFloat(&precioAerolineas,"Ingrese el valor de aerolineas (maximo 999999)\n"
										,"El valor ingresado es Incorrecto:\n",999999,1,2);

											if(validacionRetorno == 0){
													printf("El valor se guardo correctamente\n");
													calculo = 'n';
											}
											else{
													printf("El valor no fue ingresado correctamente\n");
											}
											mostrarMenuVuelos = 's';
									break;

									case 2:
										validacionRetorno = getFloat(&precioLatam,"Ingrese el valor de Latam (maximo 999999)\n"
										,"El valor ingresado es Incorrecto:\n",999999,1,2);

											if(validacionRetorno == 0){
												printf("El valor se guardo correctamente\n");
												calculo = 'n';
											}
											else{
												printf("El valor no fue ingresado correctamente\n");
											}
											mostrarMenuVuelos = 's';
									break;

									case 3:
										mostrarMenuVuelos = 'n';
									break;
									}
							}
						break;

						case 3:
							if(km != 0 && precioAerolineas != 0 && precioLatam != 0){

								getDescuento(precioAerolineas, descuento, &debitoAerolineas);
								getDescuento(precioLatam, descuento, &debitoLatam);
								getRecargo(precioAerolineas, recargo, &creditoAerolineas);
								getRecargo(precioLatam, recargo, &creditoLatam);
								getOtraDivisa(precioAerolineas, bitcoin, &bitcoinAerolineas);
								getOtraDivisa(precioLatam, bitcoin, &bitcoinLatam);
								getUnitario(precioAerolineas, km, &preciokmAerolineas);
								getUnitario(precioLatam, km, &preciokmLatam);
								getDiferencia(precioAerolineas, precioLatam, &diferencia);
								calculo = 's';
								printf("Se Calculo correctamente\n");
								system("pause");
							}

							else{
								printf("Falta ingresar datos, no se pudo calcular\n");
								system("pause");
							}

						break;

						case 4:
							if(calculo == 's'){
								printf("Aerolineas\n\n");
								printf("Precio con aerolineas: $%.2f\n", precioAerolineas);
								printf("Abonando con tarjeta de debito: $%.2f\n", debitoAerolineas);
								printf("Abonando con tarjera de credito: $%.2f\n", creditoAerolineas);
								printf("Abonando con BTC: %f btc\n", bitcoinAerolineas);
								printf("Precio por KM: %.2f\n\n", preciokmAerolineas);
								printf("Latam\n\n");
								printf("Precio con Latam: $%.2f\n", precioLatam);
								printf("Abonando con tarjeta de debito: $%.2f\n", debitoLatam);
								printf("Abonando con tarjera de credito: $%.2f\n", creditoLatam);
								printf("Abonando con BTC: %f btc\n", bitcoinLatam);
								printf("Precio por KM: %.2f\n\n", preciokmLatam);

								printf("La diferencia es de: $%.2f\n",diferencia);

								system("pause");
							}

							else{
								printf("No se hicieron los calculos\n");
								system("pause");
							}
						break;

						case 5:
							getDescuento(precioAerolineasForzado, descuento, &debitoAerolineasForzado);
							getDescuento(precioLatamForzado, descuento, &debitoLatamForzado);
							getRecargo(precioAerolineasForzado, recargo, &creditoAerolineasForzado);
							getRecargo(precioLatamForzado, recargo, &creditoLatamForzado);
							getOtraDivisa(precioAerolineasForzado, bitcoin, &bitcoinAerolineasForzado);
							getOtraDivisa(precioLatamForzado, bitcoin, &bitcoinLatamForzado);
							getUnitario(precioAerolineasForzado, kmForzado, &preciokmAerolineasForzado);
							getUnitario(precioLatamForzado, kmForzado, &preciokmLatamForzado);
							getDiferencia(precioAerolineasForzado, precioLatamForzado, &diferenciaForzado);
							printf("Aerolineas\n\n");
							printf("Precio con aerolineas: $%.2f\n", precioAerolineasForzado);
							printf("Abonando con tarjeta de debito: $%.2f\n", debitoAerolineasForzado);
							printf("Abonando con tarjera de credito: $%.2f\n", creditoAerolineasForzado);
							printf("Abonando con BTC: %f btc\n", bitcoinAerolineasForzado);
							printf("Precio por KM: %.2f\n\n", preciokmAerolineasForzado);
							printf("Latam\n\n");
							printf("Precio con Latam: $%.2f\n", precioLatamForzado);
							printf("Abonando con tarjeta de debito: $%.2f\n", debitoLatamForzado);
							printf("Abonando con tarjera de credito: $%.2f\n", creditoLatamForzado);
							printf("Abonando con BTC: %f btc\n", bitcoinLatamForzado);
							printf("Precio por KM: %.2f\n\n", preciokmLatamForzado);
							printf("La diferencia es de: $%.2f\n",diferenciaForzado);
							system("pause");

						break;

						case 6:
							mostrarMenu = 'n';
							system("pause");
						break;
					}
				}
			}
	return EXIT_SUCCESS;
		}
