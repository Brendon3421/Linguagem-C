#include <stdio.h>

main(){
	int calcDiv4,calcDiv400,ano;
	printf("Coloque um ano para verificar se ele e um Ano Bissexto!");
	scanf("%i",&ano);
	calcDiv4= ano % 4;
	calcDiv400= ano % 400;
	if(calcDiv4==0 || calcDiv400==0){
		printf("A ano Bissexto! ano: %i ",ano);
	}else{
		printf("Nao e um ano Bissexto! ano: %i",ano);
	}
}
