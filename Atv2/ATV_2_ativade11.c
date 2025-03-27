#include <stdio.h>
#include <math.h>
/*
?S = 320 – 36 = 284km
?t = 12 – 10 = 2h
*/
main(){
	float distanciaInicial,distanciaFinal,tempoInicial , tempoFinal,deltaTempo, deltaVelocidade,velocidadeMedia;
	
	printf("Qual a distancia Inicial?");
	scanf("%f",&distanciaInicial);
	printf("Qual a distancia Final?");
	scanf("%f",&distanciaFinal);
	printf("Qual o Tempo Inicial?");
	scanf("%f",&tempoInicial);
	printf("Qual o Tempo Final?");
	scanf("%f",&tempoFinal);
	
	deltaTempo=tempoFinal-tempoInicial;
	deltaVelocidade=distanciaFinal-distanciaInicial;
	velocidadeMedia=deltaVelocidade/deltaTempo;
	
	printf("a media de velocidade foi: %0.2fkm/h",velocidadeMedia);
	
}
