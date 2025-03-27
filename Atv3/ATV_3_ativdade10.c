#include <stdio.h>

main(){
	int numerador,denominador,calcDivisao;
	int calcDivisaoResto;
	printf("Coloque um numerador! \n");
	scanf("%i",&numerador);
	printf("Coloque um denominador! \n");
	scanf("%i",&denominador);
	if(denominador == 0){
		printf("nao existe divisão por zero!");
	}else{
		calcDivisao= numerador / denominador;
		calcDivisaoResto = numerador % denominador;
		printf("A divisao ficou %i / %i ,resultado ficou %i e o resto %i",numerador,denominador,calcDivisao,calcDivisaoResto);
	}
	
}
