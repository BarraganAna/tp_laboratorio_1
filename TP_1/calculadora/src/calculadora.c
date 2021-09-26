/*
 ============================================================================
 Name        : calculadora.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "input.h"
#include "operacionesMatematicas.h"
#include "mostrarNumeros.h"
#include "menu.h"


float Dividir(int numeroA, int numeroB);

int main(void) {
	setbuf(stdout, NULL);

	int numeroA = 2;
	int numeroB = 2;
	float resultadoFactorialA;
	float resultadoFactorialB;
	int opcion;

	Alumna();

	do {
		MenuOpciones(numeroA, numeroB);

		opcion = CargarEntero("INGRESE UNA OPCION: ");
		switch (opcion) {
		case 1:
			numeroA = CargarEntero("#Ingrese el primer numero(A): ");
			break;
		case 2:
			numeroB = CargarEntero("#Ingrese el segundo numero(B): ");
			break;
		case 4:
			MostrarResultadoEntero("El resultado de la suma es: ",
					Sumar(numeroA, numeroB));
			MostrarResultadoEntero("El resultado de la resta es: ",
					Restar(numeroA, numeroB));
			//MostrarResultadoFlotante("El resultado de la division es: ",Dividir(numeroA,numeroB));
			MostrarResultadoEntero("El resultado de la multiplicacion es: ",
					Multiplicar(numeroA, numeroB));
			/*resultadoFactorialA = CalcularFactorial(resultadoFactorialA,numeroA);
			MostrarResultadoFloat("El factorial del numero A es: ",
					resultadoFactorialA);
			resultadoFactorialB = CalcularFactorial(resultadoFactorialB,numeroB);
			MostrarResultadoFloat("El factorial del numero B es: ",
					resultadoFactorialB);*/
			break;
		}

	} while (opcion != 5);
	printf("GRACIAS POR USAR NUESTRA CALCULADORA!");
}

float Dividir(int numeroA, int numeroB) {
	float resultadoDivision;

	if (numeroB != 0) {
		resultadoDivision = (float) numeroA / numeroB;
	} else {
		printf("No se puede dividir por 0");

	}

	return resultadoDivision;
}

