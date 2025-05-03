#include<stdio.h>

main(){
	int i,number,numberQueDesejaColocarDeNumeros;
	float mediaPositiva = 0 , somatoria = 0,mediaAritimetrica,MediaAritimetricaPosiiva;
	printf("<<< Coloque quantos numero inteiro informar! \n");
	scanf("%d",&numberQueDesejaColocarDeNumeros);
	
	for(i=1;  i <= numberQueDesejaColocarDeNumeros; i++){
		printf("Coloque %d numero! \n", i);
		scanf("%d",&number);
		if(number >= 0){
		mediaPositiva = somatoria += number;
		}		
	}
	mediaAritimetrica = somatoria / numberQueDesejaColocarDeNumeros;
	MediaAritimetricaPosiiva = mediaPositiva / numberQueDesejaColocarDeNumeros;
	printf("A media Aritimetrica ficou em: %0.2f \n",mediaAritimetrica);
	printf("A media Aritimetrica Postiva ficou em: %0.2f \n",mediaPositiva);
	return 0;
	
}