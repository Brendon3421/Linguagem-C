#include<stdio.h>
main(){
	int number;
	printf("Coloque um numero de 0 a 9 \n");
	scanf("%i",&number);
	if(number >= 0 && number <= 9){
		printf("Coloque um numero esta dentro de 0 a 9 ", number);
	}else{
		printf("Coloque um numero esta dentro de 0 a 9, o numero esta fora do parametro %i",number);
	}
}
