#include <stdio.h>
main(){
	float number1 , number2;
	printf("Digite um valor! \n");
	scanf("%f",&number1);
	printf("Digite outro valor!\n");
	scanf("%f",&number2);
	if(number1 >= number2){
		printf(" O number 1: %0.2f e maior que o numero 2: %0.2f", number1 , number2);
	}else{
		printf(" O number 2: %0.2f e maior que o numero 1:  %0.2f", number2 ,number1 );
	}
		
}
