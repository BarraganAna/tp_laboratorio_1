/*
 * operacionesMatematicas.c
 *
 *  Created on: 25 sep. 2021
 *      Author: Stormer
 */
#include "operacionesMatematicas.h"


int Sumar(int numeroA, int numeroB){
	int resultadoSuma;

	resultadoSuma = numeroA + numeroB;

	return resultadoSuma;
}
int Restar(int numeroA, int numeroB){
	int resultadoResta;

	resultadoResta = numeroA - numeroB;

	return resultadoResta;
}
int Multiplicar(int numeroA, int numeroB){
	int resultadoMultiplicacion;

	resultadoMultiplicacion = numeroA * numeroB;

	return resultadoMultiplicacion;
}
float CalcularFactorial(float factorial, int num){
	 	if(num>0){
	 		factorial=CalcularFactorial(factorial,num-1);
	 	    factorial=factorial*num;
	 	}else{
	 	    factorial=1;
	 	}
	 	return factorial;
}
float Dividir(int numeroA, int numeroB){
	float resultadoDividir;

	if (numeroB !=0){
		resultadoDividir = (float)numeroA/numeroB;

	}
	else
	{
		resultadoDividir = -1;

	}
	return resultadoDividir;
}
