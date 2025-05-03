#include <stdio.h>

main(){
float p1,p2,calc,calcMedia;
printf("Digite a nota da P1 \n");	
scanf("%f",&p1);
printf("Digite a nota da P2 \n");	
scanf("%f",&p2);
calcMedia = (p1+p2) /2;
if(calcMedia >= 5){
	printf("VOCE FOI APROVADO! SUA MEDIA FOI: %0.2f " , calcMedia);
}else{
	calc = calcMedia - 5;
	printf("FALTOU ESSES PONTOS %0.2f ", calc);
}

}
