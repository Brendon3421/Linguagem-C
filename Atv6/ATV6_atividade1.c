#include<stdio.h>

main(){
	int i,number,numberQueDesejaColocarDeNumeros;
	float somatoria = 0,mediaAritimetrica;
	printf("<<< Coloque quantos numero inteiro informar! \n");
	scanf("%d",&numberQueDesejaColocarDeNumeros);
	
	for(i=1;  i <= numberQueDesejaColocarDeNumeros; i++){
		printf("Coloque %d um numero! \n", i);
		scanf("%d",&number);
		somatoria += number;
	}
	mediaAritimetrica = somatoria / numberQueDesejaColocarDeNumeros;
	
	printf("A media Aritimetrica ficou em: %0.2f \n",mediaAritimetrica);
	
	return 0;
	
}