/*
 * input.c
 *
 *  Created on: 25 sep. 2021
 *      Author: Stormer
 */
#include "input.h"

int CargarEntero(char mensaje[]){
	int numeroEntero;

	printf("%s",mensaje);
	scanf("%d",&numeroEntero);

	return numeroEntero;
}

float CargarFlotante(char mensaje[]){
	float numeroFlotante;

	printf("%s",mensaje);
	scanf("%d",&numeroFlotante);

	return numeroFlotante;
}
