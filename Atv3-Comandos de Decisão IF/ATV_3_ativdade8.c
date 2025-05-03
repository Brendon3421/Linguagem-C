#include <stdio.h>

main(){
	float plano = 50, minutosExtras, minutosUtilizados,calcValorExtra,valorTotal;
	
	printf("Coloque quantos minutos voce utilizou o Aplicativo! \n");
	scanf("%f",  &minutosUtilizados);
	if(minutosUtilizados >= 50){
		minutosExtras = minutosUtilizados - plano;
		calcValorExtra = minutosExtras * 1.50;
		valorTotal= calcValorExtra + plano;
		printf("Voce utilizou minutos a mais no seu plano e seu plano de 50 teve um aumento de :%0.2f e ficou custando %0.2f",calcValorExtra, valorTotal);
	}else{
		printf("voce utilizou apenas %0.2f do seu plano de 50 ",minutosUtilizados);
	}
	
	 
	
} 
